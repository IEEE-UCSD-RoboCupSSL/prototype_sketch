// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grSim_Replacement.proto

#include "grSim_Replacement.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
extern PROTOBUF_INTERNAL_EXPORT_grSim_5fReplacement_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_grSim_BallReplacement_grSim_5fReplacement_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_grSim_5fReplacement_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_grSim_RobotReplacement_grSim_5fReplacement_2eproto;
class grSim_RobotReplacementDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<grSim_RobotReplacement> _instance;
} _grSim_RobotReplacement_default_instance_;
class grSim_BallReplacementDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<grSim_BallReplacement> _instance;
} _grSim_BallReplacement_default_instance_;
class grSim_ReplacementDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<grSim_Replacement> _instance;
} _grSim_Replacement_default_instance_;
static void InitDefaultsscc_info_grSim_BallReplacement_grSim_5fReplacement_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_grSim_BallReplacement_default_instance_;
    new (ptr) ::grSim_BallReplacement();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::grSim_BallReplacement::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_grSim_BallReplacement_grSim_5fReplacement_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_grSim_BallReplacement_grSim_5fReplacement_2eproto}, {}};

static void InitDefaultsscc_info_grSim_Replacement_grSim_5fReplacement_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_grSim_Replacement_default_instance_;
    new (ptr) ::grSim_Replacement();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::grSim_Replacement::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_grSim_Replacement_grSim_5fReplacement_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_grSim_Replacement_grSim_5fReplacement_2eproto}, {
      &scc_info_grSim_BallReplacement_grSim_5fReplacement_2eproto.base,
      &scc_info_grSim_RobotReplacement_grSim_5fReplacement_2eproto.base,}};

static void InitDefaultsscc_info_grSim_RobotReplacement_grSim_5fReplacement_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_grSim_RobotReplacement_default_instance_;
    new (ptr) ::grSim_RobotReplacement();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::grSim_RobotReplacement::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_grSim_RobotReplacement_grSim_5fReplacement_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_grSim_RobotReplacement_grSim_5fReplacement_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_grSim_5fReplacement_2eproto[3];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_grSim_5fReplacement_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_grSim_5fReplacement_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_grSim_5fReplacement_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::grSim_RobotReplacement, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::grSim_RobotReplacement, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grSim_RobotReplacement, x_),
  PROTOBUF_FIELD_OFFSET(::grSim_RobotReplacement, y_),
  PROTOBUF_FIELD_OFFSET(::grSim_RobotReplacement, dir_),
  PROTOBUF_FIELD_OFFSET(::grSim_RobotReplacement, id_),
  PROTOBUF_FIELD_OFFSET(::grSim_RobotReplacement, yellowteam_),
  PROTOBUF_FIELD_OFFSET(::grSim_RobotReplacement, turnon_),
  0,
  1,
  2,
  3,
  4,
  5,
  PROTOBUF_FIELD_OFFSET(::grSim_BallReplacement, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::grSim_BallReplacement, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grSim_BallReplacement, x_),
  PROTOBUF_FIELD_OFFSET(::grSim_BallReplacement, y_),
  PROTOBUF_FIELD_OFFSET(::grSim_BallReplacement, vx_),
  PROTOBUF_FIELD_OFFSET(::grSim_BallReplacement, vy_),
  0,
  1,
  2,
  3,
  PROTOBUF_FIELD_OFFSET(::grSim_Replacement, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::grSim_Replacement, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grSim_Replacement, ball_),
  PROTOBUF_FIELD_OFFSET(::grSim_Replacement, robots_),
  0,
  ~0u,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, sizeof(::grSim_RobotReplacement)},
  { 17, 26, sizeof(::grSim_BallReplacement)},
  { 30, 37, sizeof(::grSim_Replacement)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_grSim_RobotReplacement_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_grSim_BallReplacement_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_grSim_Replacement_default_instance_),
};

const char descriptor_table_protodef_grSim_5fReplacement_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027grSim_Replacement.proto\"k\n\026grSim_Robot"
  "Replacement\022\t\n\001x\030\001 \002(\001\022\t\n\001y\030\002 \002(\001\022\013\n\003dir"
  "\030\003 \002(\001\022\n\n\002id\030\004 \002(\r\022\022\n\nyellowteam\030\005 \002(\010\022\016"
  "\n\006turnon\030\006 \001(\010\"E\n\025grSim_BallReplacement\022"
  "\t\n\001x\030\001 \001(\001\022\t\n\001y\030\002 \001(\001\022\n\n\002vx\030\003 \001(\001\022\n\n\002vy\030"
  "\004 \001(\001\"b\n\021grSim_Replacement\022$\n\004ball\030\001 \001(\013"
  "2\026.grSim_BallReplacement\022\'\n\006robots\030\002 \003(\013"
  "2\027.grSim_RobotReplacementB\007\n\005Proto"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_grSim_5fReplacement_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_grSim_5fReplacement_2eproto_sccs[3] = {
  &scc_info_grSim_BallReplacement_grSim_5fReplacement_2eproto.base,
  &scc_info_grSim_Replacement_grSim_5fReplacement_2eproto.base,
  &scc_info_grSim_RobotReplacement_grSim_5fReplacement_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_grSim_5fReplacement_2eproto_once;
static bool descriptor_table_grSim_5fReplacement_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grSim_5fReplacement_2eproto = {
  &descriptor_table_grSim_5fReplacement_2eproto_initialized, descriptor_table_protodef_grSim_5fReplacement_2eproto, "grSim_Replacement.proto", 314,
  &descriptor_table_grSim_5fReplacement_2eproto_once, descriptor_table_grSim_5fReplacement_2eproto_sccs, descriptor_table_grSim_5fReplacement_2eproto_deps, 3, 0,
  schemas, file_default_instances, TableStruct_grSim_5fReplacement_2eproto::offsets,
  file_level_metadata_grSim_5fReplacement_2eproto, 3, file_level_enum_descriptors_grSim_5fReplacement_2eproto, file_level_service_descriptors_grSim_5fReplacement_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_grSim_5fReplacement_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_grSim_5fReplacement_2eproto), true);

// ===================================================================

void grSim_RobotReplacement::InitAsDefaultInstance() {
}
class grSim_RobotReplacement::_Internal {
 public:
  using HasBits = decltype(std::declval<grSim_RobotReplacement>()._has_bits_);
  static void set_has_x(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_y(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_dir(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_yellowteam(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_turnon(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
};

grSim_RobotReplacement::grSim_RobotReplacement()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:grSim_RobotReplacement)
}
grSim_RobotReplacement::grSim_RobotReplacement(const grSim_RobotReplacement& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&turnon_) -
    reinterpret_cast<char*>(&x_)) + sizeof(turnon_));
  // @@protoc_insertion_point(copy_constructor:grSim_RobotReplacement)
}

void grSim_RobotReplacement::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&turnon_) -
      reinterpret_cast<char*>(&x_)) + sizeof(turnon_));
}

grSim_RobotReplacement::~grSim_RobotReplacement() {
  // @@protoc_insertion_point(destructor:grSim_RobotReplacement)
  SharedDtor();
}

void grSim_RobotReplacement::SharedDtor() {
}

void grSim_RobotReplacement::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const grSim_RobotReplacement& grSim_RobotReplacement::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_grSim_RobotReplacement_grSim_5fReplacement_2eproto.base);
  return *internal_default_instance();
}


void grSim_RobotReplacement::Clear() {
// @@protoc_insertion_point(message_clear_start:grSim_RobotReplacement)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    ::memset(&x_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&turnon_) -
        reinterpret_cast<char*>(&x_)) + sizeof(turnon_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* grSim_RobotReplacement::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // required double x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          _Internal::set_has_x(&has_bits);
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // required double y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          _Internal::set_has_y(&has_bits);
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // required double dir = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          _Internal::set_has_dir(&has_bits);
          dir_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // required uint32 id = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          _Internal::set_has_id(&has_bits);
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // required bool yellowteam = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          _Internal::set_has_yellowteam(&has_bits);
          yellowteam_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional bool turnon = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 48)) {
          _Internal::set_has_turnon(&has_bits);
          turnon_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* grSim_RobotReplacement::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grSim_RobotReplacement)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required double x = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_x(), target);
  }

  // required double y = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_y(), target);
  }

  // required double dir = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_dir(), target);
  }

  // required uint32 id = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteUInt32ToArray(4, this->_internal_id(), target);
  }

  // required bool yellowteam = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(5, this->_internal_yellowteam(), target);
  }

  // optional bool turnon = 6;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(6, this->_internal_turnon(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grSim_RobotReplacement)
  return target;
}

size_t grSim_RobotReplacement::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:grSim_RobotReplacement)
  size_t total_size = 0;

  if (_internal_has_x()) {
    // required double x = 1;
    total_size += 1 + 8;
  }

  if (_internal_has_y()) {
    // required double y = 2;
    total_size += 1 + 8;
  }

  if (_internal_has_dir()) {
    // required double dir = 3;
    total_size += 1 + 8;
  }

  if (_internal_has_id()) {
    // required uint32 id = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_id());
  }

  if (_internal_has_yellowteam()) {
    // required bool yellowteam = 5;
    total_size += 1 + 1;
  }

  return total_size;
}
size_t grSim_RobotReplacement::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grSim_RobotReplacement)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x0000001f) ^ 0x0000001f) == 0) {  // All required fields are present.
    // required double x = 1;
    total_size += 1 + 8;

    // required double y = 2;
    total_size += 1 + 8;

    // required double dir = 3;
    total_size += 1 + 8;

    // required uint32 id = 4;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::UInt32Size(
        this->_internal_id());

    // required bool yellowteam = 5;
    total_size += 1 + 1;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional bool turnon = 6;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000020u) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void grSim_RobotReplacement::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grSim_RobotReplacement)
  GOOGLE_DCHECK_NE(&from, this);
  const grSim_RobotReplacement* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<grSim_RobotReplacement>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grSim_RobotReplacement)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grSim_RobotReplacement)
    MergeFrom(*source);
  }
}

void grSim_RobotReplacement::MergeFrom(const grSim_RobotReplacement& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grSim_RobotReplacement)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000003fu) {
    if (cached_has_bits & 0x00000001u) {
      x_ = from.x_;
    }
    if (cached_has_bits & 0x00000002u) {
      y_ = from.y_;
    }
    if (cached_has_bits & 0x00000004u) {
      dir_ = from.dir_;
    }
    if (cached_has_bits & 0x00000008u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000010u) {
      yellowteam_ = from.yellowteam_;
    }
    if (cached_has_bits & 0x00000020u) {
      turnon_ = from.turnon_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void grSim_RobotReplacement::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grSim_RobotReplacement)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void grSim_RobotReplacement::CopyFrom(const grSim_RobotReplacement& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grSim_RobotReplacement)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool grSim_RobotReplacement::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001f) != 0x0000001f) return false;
  return true;
}

void grSim_RobotReplacement::InternalSwap(grSim_RobotReplacement* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(x_, other->x_);
  swap(y_, other->y_);
  swap(dir_, other->dir_);
  swap(id_, other->id_);
  swap(yellowteam_, other->yellowteam_);
  swap(turnon_, other->turnon_);
}

::PROTOBUF_NAMESPACE_ID::Metadata grSim_RobotReplacement::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void grSim_BallReplacement::InitAsDefaultInstance() {
}
class grSim_BallReplacement::_Internal {
 public:
  using HasBits = decltype(std::declval<grSim_BallReplacement>()._has_bits_);
  static void set_has_x(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_y(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_vx(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_vy(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

grSim_BallReplacement::grSim_BallReplacement()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:grSim_BallReplacement)
}
grSim_BallReplacement::grSim_BallReplacement(const grSim_BallReplacement& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&x_, &from.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&vy_) -
    reinterpret_cast<char*>(&x_)) + sizeof(vy_));
  // @@protoc_insertion_point(copy_constructor:grSim_BallReplacement)
}

void grSim_BallReplacement::SharedCtor() {
  ::memset(&x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&vy_) -
      reinterpret_cast<char*>(&x_)) + sizeof(vy_));
}

grSim_BallReplacement::~grSim_BallReplacement() {
  // @@protoc_insertion_point(destructor:grSim_BallReplacement)
  SharedDtor();
}

void grSim_BallReplacement::SharedDtor() {
}

void grSim_BallReplacement::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const grSim_BallReplacement& grSim_BallReplacement::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_grSim_BallReplacement_grSim_5fReplacement_2eproto.base);
  return *internal_default_instance();
}


void grSim_BallReplacement::Clear() {
// @@protoc_insertion_point(message_clear_start:grSim_BallReplacement)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    ::memset(&x_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&vy_) -
        reinterpret_cast<char*>(&x_)) + sizeof(vy_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* grSim_BallReplacement::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional double x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 9)) {
          _Internal::set_has_x(&has_bits);
          x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 17)) {
          _Internal::set_has_y(&has_bits);
          y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double vx = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          _Internal::set_has_vx(&has_bits);
          vx_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // optional double vy = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 33)) {
          _Internal::set_has_vy(&has_bits);
          vy_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* grSim_BallReplacement::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grSim_BallReplacement)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double x = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(1, this->_internal_x(), target);
  }

  // optional double y = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(2, this->_internal_y(), target);
  }

  // optional double vx = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_vx(), target);
  }

  // optional double vy = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(4, this->_internal_vy(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grSim_BallReplacement)
  return target;
}

size_t grSim_BallReplacement::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grSim_BallReplacement)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional double x = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 8;
    }

    // optional double y = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 8;
    }

    // optional double vx = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 8;
    }

    // optional double vy = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 8;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void grSim_BallReplacement::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grSim_BallReplacement)
  GOOGLE_DCHECK_NE(&from, this);
  const grSim_BallReplacement* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<grSim_BallReplacement>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grSim_BallReplacement)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grSim_BallReplacement)
    MergeFrom(*source);
  }
}

void grSim_BallReplacement::MergeFrom(const grSim_BallReplacement& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grSim_BallReplacement)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      x_ = from.x_;
    }
    if (cached_has_bits & 0x00000002u) {
      y_ = from.y_;
    }
    if (cached_has_bits & 0x00000004u) {
      vx_ = from.vx_;
    }
    if (cached_has_bits & 0x00000008u) {
      vy_ = from.vy_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void grSim_BallReplacement::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grSim_BallReplacement)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void grSim_BallReplacement::CopyFrom(const grSim_BallReplacement& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grSim_BallReplacement)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool grSim_BallReplacement::IsInitialized() const {
  return true;
}

void grSim_BallReplacement::InternalSwap(grSim_BallReplacement* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(x_, other->x_);
  swap(y_, other->y_);
  swap(vx_, other->vx_);
  swap(vy_, other->vy_);
}

::PROTOBUF_NAMESPACE_ID::Metadata grSim_BallReplacement::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

void grSim_Replacement::InitAsDefaultInstance() {
  ::_grSim_Replacement_default_instance_._instance.get_mutable()->ball_ = const_cast< ::grSim_BallReplacement*>(
      ::grSim_BallReplacement::internal_default_instance());
}
class grSim_Replacement::_Internal {
 public:
  using HasBits = decltype(std::declval<grSim_Replacement>()._has_bits_);
  static const ::grSim_BallReplacement& ball(const grSim_Replacement* msg);
  static void set_has_ball(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::grSim_BallReplacement&
grSim_Replacement::_Internal::ball(const grSim_Replacement* msg) {
  return *msg->ball_;
}
grSim_Replacement::grSim_Replacement()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:grSim_Replacement)
}
grSim_Replacement::grSim_Replacement(const grSim_Replacement& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      robots_(from.robots_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_ball()) {
    ball_ = new ::grSim_BallReplacement(*from.ball_);
  } else {
    ball_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:grSim_Replacement)
}

void grSim_Replacement::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_grSim_Replacement_grSim_5fReplacement_2eproto.base);
  ball_ = nullptr;
}

grSim_Replacement::~grSim_Replacement() {
  // @@protoc_insertion_point(destructor:grSim_Replacement)
  SharedDtor();
}

void grSim_Replacement::SharedDtor() {
  if (this != internal_default_instance()) delete ball_;
}

void grSim_Replacement::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const grSim_Replacement& grSim_Replacement::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_grSim_Replacement_grSim_5fReplacement_2eproto.base);
  return *internal_default_instance();
}


void grSim_Replacement::Clear() {
// @@protoc_insertion_point(message_clear_start:grSim_Replacement)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  robots_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(ball_ != nullptr);
    ball_->Clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* grSim_Replacement::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .grSim_BallReplacement ball = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_ball(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .grSim_RobotReplacement robots = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_robots(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag, &_internal_metadata_, ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* grSim_Replacement::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grSim_Replacement)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .grSim_BallReplacement ball = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::ball(this), target, stream);
  }

  // repeated .grSim_RobotReplacement robots = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_robots_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_robots(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grSim_Replacement)
  return target;
}

size_t grSim_Replacement::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grSim_Replacement)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .grSim_RobotReplacement robots = 2;
  total_size += 1UL * this->_internal_robots_size();
  for (const auto& msg : this->robots_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // optional .grSim_BallReplacement ball = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *ball_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void grSim_Replacement::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grSim_Replacement)
  GOOGLE_DCHECK_NE(&from, this);
  const grSim_Replacement* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<grSim_Replacement>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grSim_Replacement)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grSim_Replacement)
    MergeFrom(*source);
  }
}

void grSim_Replacement::MergeFrom(const grSim_Replacement& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grSim_Replacement)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  robots_.MergeFrom(from.robots_);
  if (from._internal_has_ball()) {
    _internal_mutable_ball()->::grSim_BallReplacement::MergeFrom(from._internal_ball());
  }
}

void grSim_Replacement::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grSim_Replacement)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void grSim_Replacement::CopyFrom(const grSim_Replacement& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grSim_Replacement)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool grSim_Replacement::IsInitialized() const {
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(robots_)) return false;
  return true;
}

void grSim_Replacement::InternalSwap(grSim_Replacement* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  robots_.InternalSwap(&other->robots_);
  swap(ball_, other->ball_);
}

::PROTOBUF_NAMESPACE_ID::Metadata grSim_Replacement::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grSim_RobotReplacement* Arena::CreateMaybeMessage< ::grSim_RobotReplacement >(Arena* arena) {
  return Arena::CreateInternal< ::grSim_RobotReplacement >(arena);
}
template<> PROTOBUF_NOINLINE ::grSim_BallReplacement* Arena::CreateMaybeMessage< ::grSim_BallReplacement >(Arena* arena) {
  return Arena::CreateInternal< ::grSim_BallReplacement >(arena);
}
template<> PROTOBUF_NOINLINE ::grSim_Replacement* Arena::CreateMaybeMessage< ::grSim_Replacement >(Arena* arena) {
  return Arena::CreateInternal< ::grSim_Replacement >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
