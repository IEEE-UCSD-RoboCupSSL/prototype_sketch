// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: messages_robocup_ssl_robot_status.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto;
class Robot_Status;
class Robot_StatusDefaultTypeInternal;
extern Robot_StatusDefaultTypeInternal _Robot_Status_default_instance_;
class Robots_Status;
class Robots_StatusDefaultTypeInternal;
extern Robots_StatusDefaultTypeInternal _Robots_Status_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::Robot_Status* Arena::CreateMaybeMessage<::Robot_Status>(Arena*);
template<> ::Robots_Status* Arena::CreateMaybeMessage<::Robots_Status>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class Robots_Status :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Robots_Status) */ {
 public:
  Robots_Status();
  virtual ~Robots_Status();

  Robots_Status(const Robots_Status& from);
  Robots_Status(Robots_Status&& from) noexcept
    : Robots_Status() {
    *this = ::std::move(from);
  }

  inline Robots_Status& operator=(const Robots_Status& from) {
    CopyFrom(from);
    return *this;
  }
  inline Robots_Status& operator=(Robots_Status&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Robots_Status& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Robots_Status* internal_default_instance() {
    return reinterpret_cast<const Robots_Status*>(
               &_Robots_Status_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Robots_Status& a, Robots_Status& b) {
    a.Swap(&b);
  }
  inline void Swap(Robots_Status* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Robots_Status* New() const final {
    return CreateMaybeMessage<Robots_Status>(nullptr);
  }

  Robots_Status* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Robots_Status>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Robots_Status& from);
  void MergeFrom(const Robots_Status& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Robots_Status* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Robots_Status";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto);
    return ::descriptor_table_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRobotsStatusFieldNumber = 1,
  };
  // repeated .Robot_Status robots_status = 1;
  int robots_status_size() const;
  private:
  int _internal_robots_status_size() const;
  public:
  void clear_robots_status();
  ::Robot_Status* mutable_robots_status(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Robot_Status >*
      mutable_robots_status();
  private:
  const ::Robot_Status& _internal_robots_status(int index) const;
  ::Robot_Status* _internal_add_robots_status();
  public:
  const ::Robot_Status& robots_status(int index) const;
  ::Robot_Status* add_robots_status();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Robot_Status >&
      robots_status() const;

  // @@protoc_insertion_point(class_scope:Robots_Status)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Robot_Status > robots_status_;
  friend struct ::TableStruct_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto;
};
// -------------------------------------------------------------------

class Robot_Status :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Robot_Status) */ {
 public:
  Robot_Status();
  virtual ~Robot_Status();

  Robot_Status(const Robot_Status& from);
  Robot_Status(Robot_Status&& from) noexcept
    : Robot_Status() {
    *this = ::std::move(from);
  }

  inline Robot_Status& operator=(const Robot_Status& from) {
    CopyFrom(from);
    return *this;
  }
  inline Robot_Status& operator=(Robot_Status&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Robot_Status& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Robot_Status* internal_default_instance() {
    return reinterpret_cast<const Robot_Status*>(
               &_Robot_Status_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Robot_Status& a, Robot_Status& b) {
    a.Swap(&b);
  }
  inline void Swap(Robot_Status* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Robot_Status* New() const final {
    return CreateMaybeMessage<Robot_Status>(nullptr);
  }

  Robot_Status* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Robot_Status>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Robot_Status& from);
  void MergeFrom(const Robot_Status& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Robot_Status* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Robot_Status";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto);
    return ::descriptor_table_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRobotIdFieldNumber = 1,
    kInfraredFieldNumber = 2,
    kFlatKickFieldNumber = 3,
    kChipKickFieldNumber = 4,
  };
  // required int32 robot_id = 1;
  bool has_robot_id() const;
  private:
  bool _internal_has_robot_id() const;
  public:
  void clear_robot_id();
  ::PROTOBUF_NAMESPACE_ID::int32 robot_id() const;
  void set_robot_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_robot_id() const;
  void _internal_set_robot_id(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // required bool infrared = 2;
  bool has_infrared() const;
  private:
  bool _internal_has_infrared() const;
  public:
  void clear_infrared();
  bool infrared() const;
  void set_infrared(bool value);
  private:
  bool _internal_infrared() const;
  void _internal_set_infrared(bool value);
  public:

  // required bool flat_kick = 3;
  bool has_flat_kick() const;
  private:
  bool _internal_has_flat_kick() const;
  public:
  void clear_flat_kick();
  bool flat_kick() const;
  void set_flat_kick(bool value);
  private:
  bool _internal_flat_kick() const;
  void _internal_set_flat_kick(bool value);
  public:

  // required bool chip_kick = 4;
  bool has_chip_kick() const;
  private:
  bool _internal_has_chip_kick() const;
  public:
  void clear_chip_kick();
  bool chip_kick() const;
  void set_chip_kick(bool value);
  private:
  bool _internal_chip_kick() const;
  void _internal_set_chip_kick(bool value);
  public:

  // @@protoc_insertion_point(class_scope:Robot_Status)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::int32 robot_id_;
  bool infrared_;
  bool flat_kick_;
  bool chip_kick_;
  friend struct ::TableStruct_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Robots_Status

// repeated .Robot_Status robots_status = 1;
inline int Robots_Status::_internal_robots_status_size() const {
  return robots_status_.size();
}
inline int Robots_Status::robots_status_size() const {
  return _internal_robots_status_size();
}
inline void Robots_Status::clear_robots_status() {
  robots_status_.Clear();
}
inline ::Robot_Status* Robots_Status::mutable_robots_status(int index) {
  // @@protoc_insertion_point(field_mutable:Robots_Status.robots_status)
  return robots_status_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Robot_Status >*
Robots_Status::mutable_robots_status() {
  // @@protoc_insertion_point(field_mutable_list:Robots_Status.robots_status)
  return &robots_status_;
}
inline const ::Robot_Status& Robots_Status::_internal_robots_status(int index) const {
  return robots_status_.Get(index);
}
inline const ::Robot_Status& Robots_Status::robots_status(int index) const {
  // @@protoc_insertion_point(field_get:Robots_Status.robots_status)
  return _internal_robots_status(index);
}
inline ::Robot_Status* Robots_Status::_internal_add_robots_status() {
  return robots_status_.Add();
}
inline ::Robot_Status* Robots_Status::add_robots_status() {
  // @@protoc_insertion_point(field_add:Robots_Status.robots_status)
  return _internal_add_robots_status();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::Robot_Status >&
Robots_Status::robots_status() const {
  // @@protoc_insertion_point(field_list:Robots_Status.robots_status)
  return robots_status_;
}

// -------------------------------------------------------------------

// Robot_Status

// required int32 robot_id = 1;
inline bool Robot_Status::_internal_has_robot_id() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Robot_Status::has_robot_id() const {
  return _internal_has_robot_id();
}
inline void Robot_Status::clear_robot_id() {
  robot_id_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Robot_Status::_internal_robot_id() const {
  return robot_id_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Robot_Status::robot_id() const {
  // @@protoc_insertion_point(field_get:Robot_Status.robot_id)
  return _internal_robot_id();
}
inline void Robot_Status::_internal_set_robot_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _has_bits_[0] |= 0x00000001u;
  robot_id_ = value;
}
inline void Robot_Status::set_robot_id(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_robot_id(value);
  // @@protoc_insertion_point(field_set:Robot_Status.robot_id)
}

// required bool infrared = 2;
inline bool Robot_Status::_internal_has_infrared() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Robot_Status::has_infrared() const {
  return _internal_has_infrared();
}
inline void Robot_Status::clear_infrared() {
  infrared_ = false;
  _has_bits_[0] &= ~0x00000002u;
}
inline bool Robot_Status::_internal_infrared() const {
  return infrared_;
}
inline bool Robot_Status::infrared() const {
  // @@protoc_insertion_point(field_get:Robot_Status.infrared)
  return _internal_infrared();
}
inline void Robot_Status::_internal_set_infrared(bool value) {
  _has_bits_[0] |= 0x00000002u;
  infrared_ = value;
}
inline void Robot_Status::set_infrared(bool value) {
  _internal_set_infrared(value);
  // @@protoc_insertion_point(field_set:Robot_Status.infrared)
}

// required bool flat_kick = 3;
inline bool Robot_Status::_internal_has_flat_kick() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Robot_Status::has_flat_kick() const {
  return _internal_has_flat_kick();
}
inline void Robot_Status::clear_flat_kick() {
  flat_kick_ = false;
  _has_bits_[0] &= ~0x00000004u;
}
inline bool Robot_Status::_internal_flat_kick() const {
  return flat_kick_;
}
inline bool Robot_Status::flat_kick() const {
  // @@protoc_insertion_point(field_get:Robot_Status.flat_kick)
  return _internal_flat_kick();
}
inline void Robot_Status::_internal_set_flat_kick(bool value) {
  _has_bits_[0] |= 0x00000004u;
  flat_kick_ = value;
}
inline void Robot_Status::set_flat_kick(bool value) {
  _internal_set_flat_kick(value);
  // @@protoc_insertion_point(field_set:Robot_Status.flat_kick)
}

// required bool chip_kick = 4;
inline bool Robot_Status::_internal_has_chip_kick() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Robot_Status::has_chip_kick() const {
  return _internal_has_chip_kick();
}
inline void Robot_Status::clear_chip_kick() {
  chip_kick_ = false;
  _has_bits_[0] &= ~0x00000008u;
}
inline bool Robot_Status::_internal_chip_kick() const {
  return chip_kick_;
}
inline bool Robot_Status::chip_kick() const {
  // @@protoc_insertion_point(field_get:Robot_Status.chip_kick)
  return _internal_chip_kick();
}
inline void Robot_Status::_internal_set_chip_kick(bool value) {
  _has_bits_[0] |= 0x00000008u;
  chip_kick_ = value;
}
inline void Robot_Status::set_chip_kick(bool value) {
  _internal_set_chip_kick(value);
  // @@protoc_insertion_point(field_set:Robot_Status.chip_kick)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_messages_5frobocup_5fssl_5frobot_5fstatus_2eproto
