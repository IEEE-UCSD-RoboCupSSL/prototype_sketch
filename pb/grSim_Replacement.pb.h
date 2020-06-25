// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grSim_Replacement.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_grSim_5fReplacement_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_grSim_5fReplacement_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_grSim_5fReplacement_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_grSim_5fReplacement_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grSim_5fReplacement_2eproto;
class grSim_BallReplacement;
class grSim_BallReplacementDefaultTypeInternal;
extern grSim_BallReplacementDefaultTypeInternal _grSim_BallReplacement_default_instance_;
class grSim_Replacement;
class grSim_ReplacementDefaultTypeInternal;
extern grSim_ReplacementDefaultTypeInternal _grSim_Replacement_default_instance_;
class grSim_RobotReplacement;
class grSim_RobotReplacementDefaultTypeInternal;
extern grSim_RobotReplacementDefaultTypeInternal _grSim_RobotReplacement_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::grSim_BallReplacement* Arena::CreateMaybeMessage<::grSim_BallReplacement>(Arena*);
template<> ::grSim_Replacement* Arena::CreateMaybeMessage<::grSim_Replacement>(Arena*);
template<> ::grSim_RobotReplacement* Arena::CreateMaybeMessage<::grSim_RobotReplacement>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class grSim_RobotReplacement :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grSim_RobotReplacement) */ {
 public:
  grSim_RobotReplacement();
  virtual ~grSim_RobotReplacement();

  grSim_RobotReplacement(const grSim_RobotReplacement& from);
  grSim_RobotReplacement(grSim_RobotReplacement&& from) noexcept
    : grSim_RobotReplacement() {
    *this = ::std::move(from);
  }

  inline grSim_RobotReplacement& operator=(const grSim_RobotReplacement& from) {
    CopyFrom(from);
    return *this;
  }
  inline grSim_RobotReplacement& operator=(grSim_RobotReplacement&& from) noexcept {
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
  static const grSim_RobotReplacement& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const grSim_RobotReplacement* internal_default_instance() {
    return reinterpret_cast<const grSim_RobotReplacement*>(
               &_grSim_RobotReplacement_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(grSim_RobotReplacement& a, grSim_RobotReplacement& b) {
    a.Swap(&b);
  }
  inline void Swap(grSim_RobotReplacement* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline grSim_RobotReplacement* New() const final {
    return CreateMaybeMessage<grSim_RobotReplacement>(nullptr);
  }

  grSim_RobotReplacement* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<grSim_RobotReplacement>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const grSim_RobotReplacement& from);
  void MergeFrom(const grSim_RobotReplacement& from);
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
  void InternalSwap(grSim_RobotReplacement* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grSim_RobotReplacement";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_grSim_5fReplacement_2eproto);
    return ::descriptor_table_grSim_5fReplacement_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kDirFieldNumber = 3,
    kIdFieldNumber = 4,
    kYellowteamFieldNumber = 5,
    kTurnonFieldNumber = 6,
  };
  // required double x = 1;
  bool has_x() const;
  private:
  bool _internal_has_x() const;
  public:
  void clear_x();
  double x() const;
  void set_x(double value);
  private:
  double _internal_x() const;
  void _internal_set_x(double value);
  public:

  // required double y = 2;
  bool has_y() const;
  private:
  bool _internal_has_y() const;
  public:
  void clear_y();
  double y() const;
  void set_y(double value);
  private:
  double _internal_y() const;
  void _internal_set_y(double value);
  public:

  // required double dir = 3;
  bool has_dir() const;
  private:
  bool _internal_has_dir() const;
  public:
  void clear_dir();
  double dir() const;
  void set_dir(double value);
  private:
  double _internal_dir() const;
  void _internal_set_dir(double value);
  public:

  // required uint32 id = 4;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // required bool yellowteam = 5;
  bool has_yellowteam() const;
  private:
  bool _internal_has_yellowteam() const;
  public:
  void clear_yellowteam();
  bool yellowteam() const;
  void set_yellowteam(bool value);
  private:
  bool _internal_yellowteam() const;
  void _internal_set_yellowteam(bool value);
  public:

  // optional bool turnon = 6;
  bool has_turnon() const;
  private:
  bool _internal_has_turnon() const;
  public:
  void clear_turnon();
  bool turnon() const;
  void set_turnon(bool value);
  private:
  bool _internal_turnon() const;
  void _internal_set_turnon(bool value);
  public:

  // @@protoc_insertion_point(class_scope:grSim_RobotReplacement)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  double x_;
  double y_;
  double dir_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  bool yellowteam_;
  bool turnon_;
  friend struct ::TableStruct_grSim_5fReplacement_2eproto;
};
// -------------------------------------------------------------------

class grSim_BallReplacement :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grSim_BallReplacement) */ {
 public:
  grSim_BallReplacement();
  virtual ~grSim_BallReplacement();

  grSim_BallReplacement(const grSim_BallReplacement& from);
  grSim_BallReplacement(grSim_BallReplacement&& from) noexcept
    : grSim_BallReplacement() {
    *this = ::std::move(from);
  }

  inline grSim_BallReplacement& operator=(const grSim_BallReplacement& from) {
    CopyFrom(from);
    return *this;
  }
  inline grSim_BallReplacement& operator=(grSim_BallReplacement&& from) noexcept {
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
  static const grSim_BallReplacement& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const grSim_BallReplacement* internal_default_instance() {
    return reinterpret_cast<const grSim_BallReplacement*>(
               &_grSim_BallReplacement_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(grSim_BallReplacement& a, grSim_BallReplacement& b) {
    a.Swap(&b);
  }
  inline void Swap(grSim_BallReplacement* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline grSim_BallReplacement* New() const final {
    return CreateMaybeMessage<grSim_BallReplacement>(nullptr);
  }

  grSim_BallReplacement* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<grSim_BallReplacement>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const grSim_BallReplacement& from);
  void MergeFrom(const grSim_BallReplacement& from);
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
  void InternalSwap(grSim_BallReplacement* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grSim_BallReplacement";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_grSim_5fReplacement_2eproto);
    return ::descriptor_table_grSim_5fReplacement_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kVxFieldNumber = 3,
    kVyFieldNumber = 4,
  };
  // optional double x = 1;
  bool has_x() const;
  private:
  bool _internal_has_x() const;
  public:
  void clear_x();
  double x() const;
  void set_x(double value);
  private:
  double _internal_x() const;
  void _internal_set_x(double value);
  public:

  // optional double y = 2;
  bool has_y() const;
  private:
  bool _internal_has_y() const;
  public:
  void clear_y();
  double y() const;
  void set_y(double value);
  private:
  double _internal_y() const;
  void _internal_set_y(double value);
  public:

  // optional double vx = 3;
  bool has_vx() const;
  private:
  bool _internal_has_vx() const;
  public:
  void clear_vx();
  double vx() const;
  void set_vx(double value);
  private:
  double _internal_vx() const;
  void _internal_set_vx(double value);
  public:

  // optional double vy = 4;
  bool has_vy() const;
  private:
  bool _internal_has_vy() const;
  public:
  void clear_vy();
  double vy() const;
  void set_vy(double value);
  private:
  double _internal_vy() const;
  void _internal_set_vy(double value);
  public:

  // @@protoc_insertion_point(class_scope:grSim_BallReplacement)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  double x_;
  double y_;
  double vx_;
  double vy_;
  friend struct ::TableStruct_grSim_5fReplacement_2eproto;
};
// -------------------------------------------------------------------

class grSim_Replacement :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grSim_Replacement) */ {
 public:
  grSim_Replacement();
  virtual ~grSim_Replacement();

  grSim_Replacement(const grSim_Replacement& from);
  grSim_Replacement(grSim_Replacement&& from) noexcept
    : grSim_Replacement() {
    *this = ::std::move(from);
  }

  inline grSim_Replacement& operator=(const grSim_Replacement& from) {
    CopyFrom(from);
    return *this;
  }
  inline grSim_Replacement& operator=(grSim_Replacement&& from) noexcept {
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
  static const grSim_Replacement& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const grSim_Replacement* internal_default_instance() {
    return reinterpret_cast<const grSim_Replacement*>(
               &_grSim_Replacement_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(grSim_Replacement& a, grSim_Replacement& b) {
    a.Swap(&b);
  }
  inline void Swap(grSim_Replacement* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline grSim_Replacement* New() const final {
    return CreateMaybeMessage<grSim_Replacement>(nullptr);
  }

  grSim_Replacement* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<grSim_Replacement>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const grSim_Replacement& from);
  void MergeFrom(const grSim_Replacement& from);
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
  void InternalSwap(grSim_Replacement* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grSim_Replacement";
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
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_grSim_5fReplacement_2eproto);
    return ::descriptor_table_grSim_5fReplacement_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kRobotsFieldNumber = 2,
    kBallFieldNumber = 1,
  };
  // repeated .grSim_RobotReplacement robots = 2;
  int robots_size() const;
  private:
  int _internal_robots_size() const;
  public:
  void clear_robots();
  ::grSim_RobotReplacement* mutable_robots(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::grSim_RobotReplacement >*
      mutable_robots();
  private:
  const ::grSim_RobotReplacement& _internal_robots(int index) const;
  ::grSim_RobotReplacement* _internal_add_robots();
  public:
  const ::grSim_RobotReplacement& robots(int index) const;
  ::grSim_RobotReplacement* add_robots();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::grSim_RobotReplacement >&
      robots() const;

  // optional .grSim_BallReplacement ball = 1;
  bool has_ball() const;
  private:
  bool _internal_has_ball() const;
  public:
  void clear_ball();
  const ::grSim_BallReplacement& ball() const;
  ::grSim_BallReplacement* release_ball();
  ::grSim_BallReplacement* mutable_ball();
  void set_allocated_ball(::grSim_BallReplacement* ball);
  private:
  const ::grSim_BallReplacement& _internal_ball() const;
  ::grSim_BallReplacement* _internal_mutable_ball();
  public:

  // @@protoc_insertion_point(class_scope:grSim_Replacement)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::grSim_RobotReplacement > robots_;
  ::grSim_BallReplacement* ball_;
  friend struct ::TableStruct_grSim_5fReplacement_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// grSim_RobotReplacement

// required double x = 1;
inline bool grSim_RobotReplacement::_internal_has_x() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool grSim_RobotReplacement::has_x() const {
  return _internal_has_x();
}
inline void grSim_RobotReplacement::clear_x() {
  x_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline double grSim_RobotReplacement::_internal_x() const {
  return x_;
}
inline double grSim_RobotReplacement::x() const {
  // @@protoc_insertion_point(field_get:grSim_RobotReplacement.x)
  return _internal_x();
}
inline void grSim_RobotReplacement::_internal_set_x(double value) {
  _has_bits_[0] |= 0x00000001u;
  x_ = value;
}
inline void grSim_RobotReplacement::set_x(double value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:grSim_RobotReplacement.x)
}

// required double y = 2;
inline bool grSim_RobotReplacement::_internal_has_y() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool grSim_RobotReplacement::has_y() const {
  return _internal_has_y();
}
inline void grSim_RobotReplacement::clear_y() {
  y_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline double grSim_RobotReplacement::_internal_y() const {
  return y_;
}
inline double grSim_RobotReplacement::y() const {
  // @@protoc_insertion_point(field_get:grSim_RobotReplacement.y)
  return _internal_y();
}
inline void grSim_RobotReplacement::_internal_set_y(double value) {
  _has_bits_[0] |= 0x00000002u;
  y_ = value;
}
inline void grSim_RobotReplacement::set_y(double value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:grSim_RobotReplacement.y)
}

// required double dir = 3;
inline bool grSim_RobotReplacement::_internal_has_dir() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool grSim_RobotReplacement::has_dir() const {
  return _internal_has_dir();
}
inline void grSim_RobotReplacement::clear_dir() {
  dir_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double grSim_RobotReplacement::_internal_dir() const {
  return dir_;
}
inline double grSim_RobotReplacement::dir() const {
  // @@protoc_insertion_point(field_get:grSim_RobotReplacement.dir)
  return _internal_dir();
}
inline void grSim_RobotReplacement::_internal_set_dir(double value) {
  _has_bits_[0] |= 0x00000004u;
  dir_ = value;
}
inline void grSim_RobotReplacement::set_dir(double value) {
  _internal_set_dir(value);
  // @@protoc_insertion_point(field_set:grSim_RobotReplacement.dir)
}

// required uint32 id = 4;
inline bool grSim_RobotReplacement::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool grSim_RobotReplacement::has_id() const {
  return _internal_has_id();
}
inline void grSim_RobotReplacement::clear_id() {
  id_ = 0u;
  _has_bits_[0] &= ~0x00000008u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 grSim_RobotReplacement::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 grSim_RobotReplacement::id() const {
  // @@protoc_insertion_point(field_get:grSim_RobotReplacement.id)
  return _internal_id();
}
inline void grSim_RobotReplacement::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000008u;
  id_ = value;
}
inline void grSim_RobotReplacement::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:grSim_RobotReplacement.id)
}

// required bool yellowteam = 5;
inline bool grSim_RobotReplacement::_internal_has_yellowteam() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool grSim_RobotReplacement::has_yellowteam() const {
  return _internal_has_yellowteam();
}
inline void grSim_RobotReplacement::clear_yellowteam() {
  yellowteam_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool grSim_RobotReplacement::_internal_yellowteam() const {
  return yellowteam_;
}
inline bool grSim_RobotReplacement::yellowteam() const {
  // @@protoc_insertion_point(field_get:grSim_RobotReplacement.yellowteam)
  return _internal_yellowteam();
}
inline void grSim_RobotReplacement::_internal_set_yellowteam(bool value) {
  _has_bits_[0] |= 0x00000010u;
  yellowteam_ = value;
}
inline void grSim_RobotReplacement::set_yellowteam(bool value) {
  _internal_set_yellowteam(value);
  // @@protoc_insertion_point(field_set:grSim_RobotReplacement.yellowteam)
}

// optional bool turnon = 6;
inline bool grSim_RobotReplacement::_internal_has_turnon() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool grSim_RobotReplacement::has_turnon() const {
  return _internal_has_turnon();
}
inline void grSim_RobotReplacement::clear_turnon() {
  turnon_ = false;
  _has_bits_[0] &= ~0x00000020u;
}
inline bool grSim_RobotReplacement::_internal_turnon() const {
  return turnon_;
}
inline bool grSim_RobotReplacement::turnon() const {
  // @@protoc_insertion_point(field_get:grSim_RobotReplacement.turnon)
  return _internal_turnon();
}
inline void grSim_RobotReplacement::_internal_set_turnon(bool value) {
  _has_bits_[0] |= 0x00000020u;
  turnon_ = value;
}
inline void grSim_RobotReplacement::set_turnon(bool value) {
  _internal_set_turnon(value);
  // @@protoc_insertion_point(field_set:grSim_RobotReplacement.turnon)
}

// -------------------------------------------------------------------

// grSim_BallReplacement

// optional double x = 1;
inline bool grSim_BallReplacement::_internal_has_x() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool grSim_BallReplacement::has_x() const {
  return _internal_has_x();
}
inline void grSim_BallReplacement::clear_x() {
  x_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline double grSim_BallReplacement::_internal_x() const {
  return x_;
}
inline double grSim_BallReplacement::x() const {
  // @@protoc_insertion_point(field_get:grSim_BallReplacement.x)
  return _internal_x();
}
inline void grSim_BallReplacement::_internal_set_x(double value) {
  _has_bits_[0] |= 0x00000001u;
  x_ = value;
}
inline void grSim_BallReplacement::set_x(double value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:grSim_BallReplacement.x)
}

// optional double y = 2;
inline bool grSim_BallReplacement::_internal_has_y() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool grSim_BallReplacement::has_y() const {
  return _internal_has_y();
}
inline void grSim_BallReplacement::clear_y() {
  y_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline double grSim_BallReplacement::_internal_y() const {
  return y_;
}
inline double grSim_BallReplacement::y() const {
  // @@protoc_insertion_point(field_get:grSim_BallReplacement.y)
  return _internal_y();
}
inline void grSim_BallReplacement::_internal_set_y(double value) {
  _has_bits_[0] |= 0x00000002u;
  y_ = value;
}
inline void grSim_BallReplacement::set_y(double value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:grSim_BallReplacement.y)
}

// optional double vx = 3;
inline bool grSim_BallReplacement::_internal_has_vx() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool grSim_BallReplacement::has_vx() const {
  return _internal_has_vx();
}
inline void grSim_BallReplacement::clear_vx() {
  vx_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline double grSim_BallReplacement::_internal_vx() const {
  return vx_;
}
inline double grSim_BallReplacement::vx() const {
  // @@protoc_insertion_point(field_get:grSim_BallReplacement.vx)
  return _internal_vx();
}
inline void grSim_BallReplacement::_internal_set_vx(double value) {
  _has_bits_[0] |= 0x00000004u;
  vx_ = value;
}
inline void grSim_BallReplacement::set_vx(double value) {
  _internal_set_vx(value);
  // @@protoc_insertion_point(field_set:grSim_BallReplacement.vx)
}

// optional double vy = 4;
inline bool grSim_BallReplacement::_internal_has_vy() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool grSim_BallReplacement::has_vy() const {
  return _internal_has_vy();
}
inline void grSim_BallReplacement::clear_vy() {
  vy_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline double grSim_BallReplacement::_internal_vy() const {
  return vy_;
}
inline double grSim_BallReplacement::vy() const {
  // @@protoc_insertion_point(field_get:grSim_BallReplacement.vy)
  return _internal_vy();
}
inline void grSim_BallReplacement::_internal_set_vy(double value) {
  _has_bits_[0] |= 0x00000008u;
  vy_ = value;
}
inline void grSim_BallReplacement::set_vy(double value) {
  _internal_set_vy(value);
  // @@protoc_insertion_point(field_set:grSim_BallReplacement.vy)
}

// -------------------------------------------------------------------

// grSim_Replacement

// optional .grSim_BallReplacement ball = 1;
inline bool grSim_Replacement::_internal_has_ball() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || ball_ != nullptr);
  return value;
}
inline bool grSim_Replacement::has_ball() const {
  return _internal_has_ball();
}
inline void grSim_Replacement::clear_ball() {
  if (ball_ != nullptr) ball_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::grSim_BallReplacement& grSim_Replacement::_internal_ball() const {
  const ::grSim_BallReplacement* p = ball_;
  return p != nullptr ? *p : *reinterpret_cast<const ::grSim_BallReplacement*>(
      &::_grSim_BallReplacement_default_instance_);
}
inline const ::grSim_BallReplacement& grSim_Replacement::ball() const {
  // @@protoc_insertion_point(field_get:grSim_Replacement.ball)
  return _internal_ball();
}
inline ::grSim_BallReplacement* grSim_Replacement::release_ball() {
  // @@protoc_insertion_point(field_release:grSim_Replacement.ball)
  _has_bits_[0] &= ~0x00000001u;
  ::grSim_BallReplacement* temp = ball_;
  ball_ = nullptr;
  return temp;
}
inline ::grSim_BallReplacement* grSim_Replacement::_internal_mutable_ball() {
  _has_bits_[0] |= 0x00000001u;
  if (ball_ == nullptr) {
    auto* p = CreateMaybeMessage<::grSim_BallReplacement>(GetArenaNoVirtual());
    ball_ = p;
  }
  return ball_;
}
inline ::grSim_BallReplacement* grSim_Replacement::mutable_ball() {
  // @@protoc_insertion_point(field_mutable:grSim_Replacement.ball)
  return _internal_mutable_ball();
}
inline void grSim_Replacement::set_allocated_ball(::grSim_BallReplacement* ball) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete ball_;
  }
  if (ball) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      ball = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, ball, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  ball_ = ball;
  // @@protoc_insertion_point(field_set_allocated:grSim_Replacement.ball)
}

// repeated .grSim_RobotReplacement robots = 2;
inline int grSim_Replacement::_internal_robots_size() const {
  return robots_.size();
}
inline int grSim_Replacement::robots_size() const {
  return _internal_robots_size();
}
inline void grSim_Replacement::clear_robots() {
  robots_.Clear();
}
inline ::grSim_RobotReplacement* grSim_Replacement::mutable_robots(int index) {
  // @@protoc_insertion_point(field_mutable:grSim_Replacement.robots)
  return robots_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::grSim_RobotReplacement >*
grSim_Replacement::mutable_robots() {
  // @@protoc_insertion_point(field_mutable_list:grSim_Replacement.robots)
  return &robots_;
}
inline const ::grSim_RobotReplacement& grSim_Replacement::_internal_robots(int index) const {
  return robots_.Get(index);
}
inline const ::grSim_RobotReplacement& grSim_Replacement::robots(int index) const {
  // @@protoc_insertion_point(field_get:grSim_Replacement.robots)
  return _internal_robots(index);
}
inline ::grSim_RobotReplacement* grSim_Replacement::_internal_add_robots() {
  return robots_.Add();
}
inline ::grSim_RobotReplacement* grSim_Replacement::add_robots() {
  // @@protoc_insertion_point(field_add:grSim_Replacement.robots)
  return _internal_add_robots();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::grSim_RobotReplacement >&
grSim_Replacement::robots() const {
  // @@protoc_insertion_point(field_list:grSim_Replacement.robots)
  return robots_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_grSim_5fReplacement_2eproto
