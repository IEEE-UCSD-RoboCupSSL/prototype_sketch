// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: grSim_Packet.proto

#include "grSim_Packet.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_grSim_5fCommands_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_grSim_Commands_grSim_5fCommands_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_grSim_5fReplacement_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_grSim_Replacement_grSim_5fReplacement_2eproto;
class grSim_PacketDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<grSim_Packet> _instance;
} _grSim_Packet_default_instance_;
static void InitDefaultsscc_info_grSim_Packet_grSim_5fPacket_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_grSim_Packet_default_instance_;
    new (ptr) ::grSim_Packet();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::grSim_Packet::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_grSim_Packet_grSim_5fPacket_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_grSim_Packet_grSim_5fPacket_2eproto}, {
      &scc_info_grSim_Commands_grSim_5fCommands_2eproto.base,
      &scc_info_grSim_Replacement_grSim_5fReplacement_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_grSim_5fPacket_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_grSim_5fPacket_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_grSim_5fPacket_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_grSim_5fPacket_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::grSim_Packet, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::grSim_Packet, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::grSim_Packet, commands_),
  PROTOBUF_FIELD_OFFSET(::grSim_Packet, replacement_),
  0,
  1,
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::grSim_Packet)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::_grSim_Packet_default_instance_),
};

const char descriptor_table_protodef_grSim_5fPacket_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022grSim_Packet.proto\032\024grSim_Commands.pro"
  "to\032\027grSim_Replacement.proto\"Z\n\014grSim_Pac"
  "ket\022!\n\010commands\030\001 \001(\0132\017.grSim_Commands\022\'"
  "\n\013replacement\030\002 \001(\0132\022.grSim_ReplacementB"
  "\007\n\005Proto"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_grSim_5fPacket_2eproto_deps[2] = {
  &::descriptor_table_grSim_5fCommands_2eproto,
  &::descriptor_table_grSim_5fReplacement_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_grSim_5fPacket_2eproto_sccs[1] = {
  &scc_info_grSim_Packet_grSim_5fPacket_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_grSim_5fPacket_2eproto_once;
static bool descriptor_table_grSim_5fPacket_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_grSim_5fPacket_2eproto = {
  &descriptor_table_grSim_5fPacket_2eproto_initialized, descriptor_table_protodef_grSim_5fPacket_2eproto, "grSim_Packet.proto", 168,
  &descriptor_table_grSim_5fPacket_2eproto_once, descriptor_table_grSim_5fPacket_2eproto_sccs, descriptor_table_grSim_5fPacket_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_grSim_5fPacket_2eproto::offsets,
  file_level_metadata_grSim_5fPacket_2eproto, 1, file_level_enum_descriptors_grSim_5fPacket_2eproto, file_level_service_descriptors_grSim_5fPacket_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_grSim_5fPacket_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_grSim_5fPacket_2eproto), true);

// ===================================================================

void grSim_Packet::InitAsDefaultInstance() {
  ::_grSim_Packet_default_instance_._instance.get_mutable()->commands_ = const_cast< ::grSim_Commands*>(
      ::grSim_Commands::internal_default_instance());
  ::_grSim_Packet_default_instance_._instance.get_mutable()->replacement_ = const_cast< ::grSim_Replacement*>(
      ::grSim_Replacement::internal_default_instance());
}
class grSim_Packet::_Internal {
 public:
  using HasBits = decltype(std::declval<grSim_Packet>()._has_bits_);
  static const ::grSim_Commands& commands(const grSim_Packet* msg);
  static void set_has_commands(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::grSim_Replacement& replacement(const grSim_Packet* msg);
  static void set_has_replacement(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::grSim_Commands&
grSim_Packet::_Internal::commands(const grSim_Packet* msg) {
  return *msg->commands_;
}
const ::grSim_Replacement&
grSim_Packet::_Internal::replacement(const grSim_Packet* msg) {
  return *msg->replacement_;
}
void grSim_Packet::clear_commands() {
  if (commands_ != nullptr) commands_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void grSim_Packet::clear_replacement() {
  if (replacement_ != nullptr) replacement_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
grSim_Packet::grSim_Packet()
  : ::PROTOBUF_NAMESPACE_ID::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:grSim_Packet)
}
grSim_Packet::grSim_Packet(const grSim_Packet& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._internal_has_commands()) {
    commands_ = new ::grSim_Commands(*from.commands_);
  } else {
    commands_ = nullptr;
  }
  if (from._internal_has_replacement()) {
    replacement_ = new ::grSim_Replacement(*from.replacement_);
  } else {
    replacement_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:grSim_Packet)
}

void grSim_Packet::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_grSim_Packet_grSim_5fPacket_2eproto.base);
  ::memset(&commands_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&replacement_) -
      reinterpret_cast<char*>(&commands_)) + sizeof(replacement_));
}

grSim_Packet::~grSim_Packet() {
  // @@protoc_insertion_point(destructor:grSim_Packet)
  SharedDtor();
}

void grSim_Packet::SharedDtor() {
  if (this != internal_default_instance()) delete commands_;
  if (this != internal_default_instance()) delete replacement_;
}

void grSim_Packet::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const grSim_Packet& grSim_Packet::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_grSim_Packet_grSim_5fPacket_2eproto.base);
  return *internal_default_instance();
}


void grSim_Packet::Clear() {
// @@protoc_insertion_point(message_clear_start:grSim_Packet)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(commands_ != nullptr);
      commands_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(replacement_ != nullptr);
      replacement_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

const char* grSim_Packet::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // optional .grSim_Commands commands = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_commands(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // optional .grSim_Replacement replacement = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_replacement(), ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* grSim_Packet::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:grSim_Packet)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .grSim_Commands commands = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::commands(this), target, stream);
  }

  // optional .grSim_Replacement replacement = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        2, _Internal::replacement(this), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:grSim_Packet)
  return target;
}

size_t grSim_Packet::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:grSim_Packet)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .grSim_Commands commands = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *commands_);
    }

    // optional .grSim_Replacement replacement = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *replacement_);
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

void grSim_Packet::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:grSim_Packet)
  GOOGLE_DCHECK_NE(&from, this);
  const grSim_Packet* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<grSim_Packet>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:grSim_Packet)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:grSim_Packet)
    MergeFrom(*source);
  }
}

void grSim_Packet::MergeFrom(const grSim_Packet& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:grSim_Packet)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_commands()->::grSim_Commands::MergeFrom(from._internal_commands());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_replacement()->::grSim_Replacement::MergeFrom(from._internal_replacement());
    }
  }
}

void grSim_Packet::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:grSim_Packet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void grSim_Packet::CopyFrom(const grSim_Packet& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:grSim_Packet)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool grSim_Packet::IsInitialized() const {
  if (_internal_has_commands()) {
    if (!commands_->IsInitialized()) return false;
  }
  if (_internal_has_replacement()) {
    if (!replacement_->IsInitialized()) return false;
  }
  return true;
}

void grSim_Packet::InternalSwap(grSim_Packet* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  swap(commands_, other->commands_);
  swap(replacement_, other->replacement_);
}

::PROTOBUF_NAMESPACE_ID::Metadata grSim_Packet::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::grSim_Packet* Arena::CreateMaybeMessage< ::grSim_Packet >(Arena* arena) {
  return Arena::CreateInternal< ::grSim_Packet >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
