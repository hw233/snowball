//------------------------------------------------------------------------------
// <auto-generated>
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
// </auto-generated>
//------------------------------------------------------------------------------

// Generated from: acc.proto
namespace dhc
{
  [global::System.Serializable, global::ProtoBuf.ProtoContract(Name=@"acc_t")]
  public partial class acc_t : global::ProtoBuf.IExtensible
  {
    public acc_t() {}
    
    private ulong _guid = default(ulong);
    [global::ProtoBuf.ProtoMember(1, IsRequired = false, Name=@"guid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(ulong))]
    public ulong guid
    {
      get { return _guid; }
      set { _guid = value; }
    }
    private string _username = "";
    [global::ProtoBuf.ProtoMember(2, IsRequired = false, Name=@"username", DataFormat = global::ProtoBuf.DataFormat.Default)]
    [global::System.ComponentModel.DefaultValue("")]
    public string username
    {
      get { return _username; }
      set { _username = value; }
    }
    private int _serverid = default(int);
    [global::ProtoBuf.ProtoMember(3, IsRequired = false, Name=@"serverid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int serverid
    {
      get { return _serverid; }
      set { _serverid = value; }
    }
    private int _gm_level = default(int);
    [global::ProtoBuf.ProtoMember(4, IsRequired = false, Name=@"gm_level", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int gm_level
    {
      get { return _gm_level; }
      set { _gm_level = value; }
    }
    private ulong _fenghao_time = default(ulong);
    [global::ProtoBuf.ProtoMember(5, IsRequired = false, Name=@"fenghao_time", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(ulong))]
    public ulong fenghao_time
    {
      get { return _fenghao_time; }
      set { _fenghao_time = value; }
    }
    private int _rank_forbid = default(int);
    [global::ProtoBuf.ProtoMember(6, IsRequired = false, Name=@"rank_forbid", DataFormat = global::ProtoBuf.DataFormat.TwosComplement)]
    [global::System.ComponentModel.DefaultValue(default(int))]
    public int rank_forbid
    {
      get { return _rank_forbid; }
      set { _rank_forbid = value; }
    }
    private global::ProtoBuf.IExtension extensionObject;
    global::ProtoBuf.IExtension global::ProtoBuf.IExtensible.GetExtensionObject(bool createIfMissing)
      { return global::ProtoBuf.Extensible.GetExtensionObject(ref extensionObject, createIfMissing); }
  }
  
}