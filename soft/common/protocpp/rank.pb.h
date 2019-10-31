// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: rank.proto

#ifndef PROTOBUF_INCLUDED_rank_2eproto
#define PROTOBUF_INCLUDED_rank_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_rank_2eproto 

namespace protobuf_rank_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_rank_2eproto
namespace dhc {
class rank_t;
class rank_tDefaultTypeInternal;
extern rank_tDefaultTypeInternal _rank_t_default_instance_;
}  // namespace dhc
namespace google {
namespace protobuf {
template<> ::dhc::rank_t* Arena::CreateMaybeMessage<::dhc::rank_t>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace dhc {

// ===================================================================

class rank_t : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:dhc.rank_t) */ {
 public:
  rank_t();
  virtual ~rank_t();

  rank_t(const rank_t& from);

  inline rank_t& operator=(const rank_t& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  rank_t(rank_t&& from) noexcept
    : rank_t() {
    *this = ::std::move(from);
  }

  inline rank_t& operator=(rank_t&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const rank_t& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const rank_t* internal_default_instance() {
    return reinterpret_cast<const rank_t*>(
               &_rank_t_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(rank_t* other);
  friend void swap(rank_t& a, rank_t& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline rank_t* New() const final {
    return CreateMaybeMessage<rank_t>(NULL);
  }

  rank_t* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<rank_t>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const rank_t& from);
  void MergeFrom(const rank_t& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(rank_t* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated uint64 player_guid = 2;
  int player_guid_size() const;
  void clear_player_guid();
  static const int kPlayerGuidFieldNumber = 2;
  ::google::protobuf::uint64 player_guid(int index) const;
  void set_player_guid(int index, ::google::protobuf::uint64 value);
  void add_player_guid(::google::protobuf::uint64 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      player_guid() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_player_guid();

  // repeated string name = 3;
  int name_size() const;
  void clear_name();
  static const int kNameFieldNumber = 3;
  const ::std::string& name(int index) const;
  ::std::string* mutable_name(int index);
  void set_name(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_name(int index, ::std::string&& value);
  #endif
  void set_name(int index, const char* value);
  void set_name(int index, const char* value, size_t size);
  ::std::string* add_name();
  void add_name(const ::std::string& value);
  #if LANG_CXX11
  void add_name(::std::string&& value);
  #endif
  void add_name(const char* value);
  void add_name(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& name() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_name();

  // repeated int32 sex = 4;
  int sex_size() const;
  void clear_sex();
  static const int kSexFieldNumber = 4;
  ::google::protobuf::int32 sex(int index) const;
  void set_sex(int index, ::google::protobuf::int32 value);
  void add_sex(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      sex() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_sex();

  // repeated int32 level = 5;
  int level_size() const;
  void clear_level();
  static const int kLevelFieldNumber = 5;
  ::google::protobuf::int32 level(int index) const;
  void set_level(int index, ::google::protobuf::int32 value);
  void add_level(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      level() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_level();

  // repeated int32 avatar = 6;
  int avatar_size() const;
  void clear_avatar();
  static const int kAvatarFieldNumber = 6;
  ::google::protobuf::int32 avatar(int index) const;
  void set_avatar(int index, ::google::protobuf::int32 value);
  void add_avatar(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      avatar() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_avatar();

  // repeated int32 toukuang = 7;
  int toukuang_size() const;
  void clear_toukuang();
  static const int kToukuangFieldNumber = 7;
  ::google::protobuf::int32 toukuang(int index) const;
  void set_toukuang(int index, ::google::protobuf::int32 value);
  void add_toukuang(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      toukuang() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_toukuang();

  // repeated int32 region_id = 8;
  int region_id_size() const;
  void clear_region_id();
  static const int kRegionIdFieldNumber = 8;
  ::google::protobuf::int32 region_id(int index) const;
  void set_region_id(int index, ::google::protobuf::int32 value);
  void add_region_id(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      region_id() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_region_id();

  // repeated int32 name_color = 9;
  int name_color_size() const;
  void clear_name_color();
  static const int kNameColorFieldNumber = 9;
  ::google::protobuf::int32 name_color(int index) const;
  void set_name_color(int index, ::google::protobuf::int32 value);
  void add_name_color(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      name_color() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_name_color();

  // repeated int32 value = 10;
  int value_size() const;
  void clear_value();
  static const int kValueFieldNumber = 10;
  ::google::protobuf::int32 value(int index) const;
  void set_value(int index, ::google::protobuf::int32 value);
  void add_value(::google::protobuf::int32 value);
  const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      value() const;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_value();

  // optional uint64 guid = 1;
  bool has_guid() const;
  void clear_guid();
  static const int kGuidFieldNumber = 1;
  ::google::protobuf::uint64 guid() const;
  void set_guid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:dhc.rank_t)
 private:
  void set_has_guid();
  void clear_has_guid();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > player_guid_;
  ::google::protobuf::RepeatedPtrField< ::std::string> name_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > sex_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > level_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > avatar_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > toukuang_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > region_id_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > name_color_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > value_;
  ::google::protobuf::uint64 guid_;
  friend struct ::protobuf_rank_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// rank_t

// optional uint64 guid = 1;
inline bool rank_t::has_guid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void rank_t::set_has_guid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void rank_t::clear_has_guid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void rank_t::clear_guid() {
  set_changed();
  guid_ = GOOGLE_ULONGLONG(0);
  clear_has_guid();
}
inline ::google::protobuf::uint64 rank_t::guid() const {
  // @@protoc_insertion_point(field_get:dhc.rank_t.guid)
  return guid_;
}
inline void rank_t::set_guid(::google::protobuf::uint64 value) {
  set_changed();
  set_has_guid();
  guid_ = value;
  // @@protoc_insertion_point(field_set:dhc.rank_t.guid)
}

// repeated uint64 player_guid = 2;
inline int rank_t::player_guid_size() const {
  return player_guid_.size();
}
inline void rank_t::clear_player_guid() {
  set_changed();
  player_guid_.Clear();
}
inline ::google::protobuf::uint64 rank_t::player_guid(int index) const {
  // @@protoc_insertion_point(field_get:dhc.rank_t.player_guid)
  return player_guid_.Get(index);
}
inline void rank_t::set_player_guid(int index, ::google::protobuf::uint64 value) {
  set_changed();
  player_guid_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.rank_t.player_guid)
}
inline void rank_t::add_player_guid(::google::protobuf::uint64 value) {
  set_changed();
  player_guid_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.rank_t.player_guid)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
rank_t::player_guid() const {
  // @@protoc_insertion_point(field_list:dhc.rank_t.player_guid)
  return player_guid_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
rank_t::mutable_player_guid() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.rank_t.player_guid)
  return &player_guid_;
}

// repeated string name = 3;
inline int rank_t::name_size() const {
  return name_.size();
}
inline void rank_t::clear_name() {
  set_changed();
  name_.Clear();
}
inline const ::std::string& rank_t::name(int index) const {
  // @@protoc_insertion_point(field_get:dhc.rank_t.name)
  return name_.Get(index);
}
inline ::std::string* rank_t::mutable_name(int index) {
  set_changed();
  // @@protoc_insertion_point(field_mutable:dhc.rank_t.name)
  return name_.Mutable(index);
}
inline void rank_t::set_name(int index, const ::std::string& value) {
  set_changed();
  // @@protoc_insertion_point(field_set:dhc.rank_t.name)
  name_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void rank_t::set_name(int index, ::std::string&& value) {
  set_changed();
  // @@protoc_insertion_point(field_set:dhc.rank_t.name)
  name_.Mutable(index)->assign(std::move(value));
}
#endif
inline void rank_t::set_name(int index, const char* value) {
  set_changed();
  GOOGLE_DCHECK(value != NULL);
  name_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:dhc.rank_t.name)
}
inline void rank_t::set_name(int index, const char* value, size_t size) {
  set_changed();
  name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:dhc.rank_t.name)
}
inline ::std::string* rank_t::add_name() {
  set_changed();
  // @@protoc_insertion_point(field_add_mutable:dhc.rank_t.name)
  return name_.Add();
}
inline void rank_t::add_name(const ::std::string& value) {
  set_changed();
  name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:dhc.rank_t.name)
}
#if LANG_CXX11
inline void rank_t::add_name(::std::string&& value) {
  set_changed();
  name_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:dhc.rank_t.name)
}
#endif
inline void rank_t::add_name(const char* value) {
  set_changed();
  GOOGLE_DCHECK(value != NULL);
  name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:dhc.rank_t.name)
}
inline void rank_t::add_name(const char* value, size_t size) {
  set_changed();
  name_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:dhc.rank_t.name)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
rank_t::name() const {
  // @@protoc_insertion_point(field_list:dhc.rank_t.name)
  return name_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
rank_t::mutable_name() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.rank_t.name)
  return &name_;
}

// repeated int32 sex = 4;
inline int rank_t::sex_size() const {
  return sex_.size();
}
inline void rank_t::clear_sex() {
  set_changed();
  sex_.Clear();
}
inline ::google::protobuf::int32 rank_t::sex(int index) const {
  // @@protoc_insertion_point(field_get:dhc.rank_t.sex)
  return sex_.Get(index);
}
inline void rank_t::set_sex(int index, ::google::protobuf::int32 value) {
  set_changed();
  sex_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.rank_t.sex)
}
inline void rank_t::add_sex(::google::protobuf::int32 value) {
  set_changed();
  sex_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.rank_t.sex)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
rank_t::sex() const {
  // @@protoc_insertion_point(field_list:dhc.rank_t.sex)
  return sex_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
rank_t::mutable_sex() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.rank_t.sex)
  return &sex_;
}

// repeated int32 level = 5;
inline int rank_t::level_size() const {
  return level_.size();
}
inline void rank_t::clear_level() {
  set_changed();
  level_.Clear();
}
inline ::google::protobuf::int32 rank_t::level(int index) const {
  // @@protoc_insertion_point(field_get:dhc.rank_t.level)
  return level_.Get(index);
}
inline void rank_t::set_level(int index, ::google::protobuf::int32 value) {
  set_changed();
  level_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.rank_t.level)
}
inline void rank_t::add_level(::google::protobuf::int32 value) {
  set_changed();
  level_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.rank_t.level)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
rank_t::level() const {
  // @@protoc_insertion_point(field_list:dhc.rank_t.level)
  return level_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
rank_t::mutable_level() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.rank_t.level)
  return &level_;
}

// repeated int32 avatar = 6;
inline int rank_t::avatar_size() const {
  return avatar_.size();
}
inline void rank_t::clear_avatar() {
  set_changed();
  avatar_.Clear();
}
inline ::google::protobuf::int32 rank_t::avatar(int index) const {
  // @@protoc_insertion_point(field_get:dhc.rank_t.avatar)
  return avatar_.Get(index);
}
inline void rank_t::set_avatar(int index, ::google::protobuf::int32 value) {
  set_changed();
  avatar_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.rank_t.avatar)
}
inline void rank_t::add_avatar(::google::protobuf::int32 value) {
  set_changed();
  avatar_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.rank_t.avatar)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
rank_t::avatar() const {
  // @@protoc_insertion_point(field_list:dhc.rank_t.avatar)
  return avatar_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
rank_t::mutable_avatar() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.rank_t.avatar)
  return &avatar_;
}

// repeated int32 toukuang = 7;
inline int rank_t::toukuang_size() const {
  return toukuang_.size();
}
inline void rank_t::clear_toukuang() {
  set_changed();
  toukuang_.Clear();
}
inline ::google::protobuf::int32 rank_t::toukuang(int index) const {
  // @@protoc_insertion_point(field_get:dhc.rank_t.toukuang)
  return toukuang_.Get(index);
}
inline void rank_t::set_toukuang(int index, ::google::protobuf::int32 value) {
  set_changed();
  toukuang_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.rank_t.toukuang)
}
inline void rank_t::add_toukuang(::google::protobuf::int32 value) {
  set_changed();
  toukuang_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.rank_t.toukuang)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
rank_t::toukuang() const {
  // @@protoc_insertion_point(field_list:dhc.rank_t.toukuang)
  return toukuang_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
rank_t::mutable_toukuang() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.rank_t.toukuang)
  return &toukuang_;
}

// repeated int32 region_id = 8;
inline int rank_t::region_id_size() const {
  return region_id_.size();
}
inline void rank_t::clear_region_id() {
  set_changed();
  region_id_.Clear();
}
inline ::google::protobuf::int32 rank_t::region_id(int index) const {
  // @@protoc_insertion_point(field_get:dhc.rank_t.region_id)
  return region_id_.Get(index);
}
inline void rank_t::set_region_id(int index, ::google::protobuf::int32 value) {
  set_changed();
  region_id_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.rank_t.region_id)
}
inline void rank_t::add_region_id(::google::protobuf::int32 value) {
  set_changed();
  region_id_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.rank_t.region_id)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
rank_t::region_id() const {
  // @@protoc_insertion_point(field_list:dhc.rank_t.region_id)
  return region_id_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
rank_t::mutable_region_id() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.rank_t.region_id)
  return &region_id_;
}

// repeated int32 name_color = 9;
inline int rank_t::name_color_size() const {
  return name_color_.size();
}
inline void rank_t::clear_name_color() {
  set_changed();
  name_color_.Clear();
}
inline ::google::protobuf::int32 rank_t::name_color(int index) const {
  // @@protoc_insertion_point(field_get:dhc.rank_t.name_color)
  return name_color_.Get(index);
}
inline void rank_t::set_name_color(int index, ::google::protobuf::int32 value) {
  set_changed();
  name_color_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.rank_t.name_color)
}
inline void rank_t::add_name_color(::google::protobuf::int32 value) {
  set_changed();
  name_color_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.rank_t.name_color)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
rank_t::name_color() const {
  // @@protoc_insertion_point(field_list:dhc.rank_t.name_color)
  return name_color_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
rank_t::mutable_name_color() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.rank_t.name_color)
  return &name_color_;
}

// repeated int32 value = 10;
inline int rank_t::value_size() const {
  return value_.size();
}
inline void rank_t::clear_value() {
  set_changed();
  value_.Clear();
}
inline ::google::protobuf::int32 rank_t::value(int index) const {
  // @@protoc_insertion_point(field_get:dhc.rank_t.value)
  return value_.Get(index);
}
inline void rank_t::set_value(int index, ::google::protobuf::int32 value) {
  set_changed();
  value_.Set(index, value);
  // @@protoc_insertion_point(field_set:dhc.rank_t.value)
}
inline void rank_t::add_value(::google::protobuf::int32 value) {
  set_changed();
  value_.Add(value);
  // @@protoc_insertion_point(field_add:dhc.rank_t.value)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
rank_t::value() const {
  // @@protoc_insertion_point(field_list:dhc.rank_t.value)
  return value_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
rank_t::mutable_value() {
  set_changed();
  // @@protoc_insertion_point(field_mutable_list:dhc.rank_t.value)
  return &value_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace dhc

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_rank_2eproto