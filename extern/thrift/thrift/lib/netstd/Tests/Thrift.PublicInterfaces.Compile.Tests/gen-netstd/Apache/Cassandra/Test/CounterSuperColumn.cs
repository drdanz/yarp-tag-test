/**
 * Autogenerated by Thrift Compiler (0.14.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
using System;
using System.Collections;
using System.Collections.Generic;
using System.Text;
using System.IO;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using Microsoft.Extensions.Logging;
using Thrift;
using Thrift.Collections;
using System.ServiceModel;
using System.Runtime.Serialization;

using Thrift.Protocol;
using Thrift.Protocol.Entities;
using Thrift.Protocol.Utilities;
using Thrift.Transport;
using Thrift.Transport.Client;
using Thrift.Transport.Server;
using Thrift.Processor;


#pragma warning disable IDE0079  // remove unnecessary pragmas
#pragma warning disable IDE1006  // parts of the code use IDL spelling

namespace Apache.Cassandra.Test
{

  [DataContract(Namespace="")]
  public partial class CounterSuperColumn : TBase
  {

    [DataMember(Order = 0)]
    public byte[] Name { get; set; }

    [DataMember(Order = 0)]
    public List<global::Apache.Cassandra.Test.CounterColumn> Columns { get; set; }

    public CounterSuperColumn()
    {
    }

    public CounterSuperColumn(byte[] name, List<global::Apache.Cassandra.Test.CounterColumn> columns) : this()
    {
      this.Name = name;
      this.Columns = columns;
    }

    public CounterSuperColumn DeepCopy()
    {
      var tmp10 = new CounterSuperColumn();
      if((Name != null))
      {
        tmp10.Name = this.Name.ToArray();
      }
      if((Columns != null))
      {
        tmp10.Columns = this.Columns.DeepCopy();
      }
      return tmp10;
    }

    public async global::System.Threading.Tasks.Task ReadAsync(TProtocol iprot, CancellationToken cancellationToken)
    {
      iprot.IncrementRecursionDepth();
      try
      {
        bool isset_name = false;
        bool isset_columns = false;
        TField field;
        await iprot.ReadStructBeginAsync(cancellationToken);
        while (true)
        {
          field = await iprot.ReadFieldBeginAsync(cancellationToken);
          if (field.Type == TType.Stop)
          {
            break;
          }

          switch (field.ID)
          {
            case 1:
              if (field.Type == TType.String)
              {
                Name = await iprot.ReadBinaryAsync(cancellationToken);
                isset_name = true;
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            case 2:
              if (field.Type == TType.List)
              {
                {
                  TList _list11 = await iprot.ReadListBeginAsync(cancellationToken);
                  Columns = new List<global::Apache.Cassandra.Test.CounterColumn>(_list11.Count);
                  for(int _i12 = 0; _i12 < _list11.Count; ++_i12)
                  {
                    global::Apache.Cassandra.Test.CounterColumn _elem13;
                    _elem13 = new global::Apache.Cassandra.Test.CounterColumn();
                    await _elem13.ReadAsync(iprot, cancellationToken);
                    Columns.Add(_elem13);
                  }
                  await iprot.ReadListEndAsync(cancellationToken);
                }
                isset_columns = true;
              }
              else
              {
                await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              }
              break;
            default: 
              await TProtocolUtil.SkipAsync(iprot, field.Type, cancellationToken);
              break;
          }

          await iprot.ReadFieldEndAsync(cancellationToken);
        }

        await iprot.ReadStructEndAsync(cancellationToken);
        if (!isset_name)
        {
          throw new TProtocolException(TProtocolException.INVALID_DATA);
        }
        if (!isset_columns)
        {
          throw new TProtocolException(TProtocolException.INVALID_DATA);
        }
      }
      finally
      {
        iprot.DecrementRecursionDepth();
      }
    }

    public async global::System.Threading.Tasks.Task WriteAsync(TProtocol oprot, CancellationToken cancellationToken)
    {
      oprot.IncrementRecursionDepth();
      try
      {
        var struc = new TStruct("CounterSuperColumn");
        await oprot.WriteStructBeginAsync(struc, cancellationToken);
        var field = new TField();
        if((Name != null))
        {
          field.Name = "name";
          field.Type = TType.String;
          field.ID = 1;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          await oprot.WriteBinaryAsync(Name, cancellationToken);
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        if((Columns != null))
        {
          field.Name = "columns";
          field.Type = TType.List;
          field.ID = 2;
          await oprot.WriteFieldBeginAsync(field, cancellationToken);
          {
            await oprot.WriteListBeginAsync(new TList(TType.Struct, Columns.Count), cancellationToken);
            foreach (global::Apache.Cassandra.Test.CounterColumn _iter14 in Columns)
            {
              await _iter14.WriteAsync(oprot, cancellationToken);
            }
            await oprot.WriteListEndAsync(cancellationToken);
          }
          await oprot.WriteFieldEndAsync(cancellationToken);
        }
        await oprot.WriteFieldStopAsync(cancellationToken);
        await oprot.WriteStructEndAsync(cancellationToken);
      }
      finally
      {
        oprot.DecrementRecursionDepth();
      }
    }

    public override bool Equals(object that)
    {
      if (!(that is CounterSuperColumn other)) return false;
      if (ReferenceEquals(this, other)) return true;
      return TCollections.Equals(Name, other.Name)
        && TCollections.Equals(Columns, other.Columns);
    }

    public override int GetHashCode() {
      int hashcode = 157;
      unchecked {
        if((Name != null))
        {
          hashcode = (hashcode * 397) + Name.GetHashCode();
        }
        if((Columns != null))
        {
          hashcode = (hashcode * 397) + TCollections.GetHashCode(Columns);
        }
      }
      return hashcode;
    }

    public override string ToString()
    {
      var sb = new StringBuilder("CounterSuperColumn(");
      if((Name != null))
      {
        sb.Append(", Name: ");
        Name.ToString(sb);
      }
      if((Columns != null))
      {
        sb.Append(", Columns: ");
        Columns.ToString(sb);
      }
      sb.Append(')');
      return sb.ToString();
    }
  }

}
