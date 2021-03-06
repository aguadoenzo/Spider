// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Proto/CmdPacket.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "CmdPacket.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* CmdPacket_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CmdPacket_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Proto_2fCmdPacket_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_Proto_2fCmdPacket_2eproto() {
  protobuf_AddDesc_Proto_2fCmdPacket_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Proto/CmdPacket.proto");
  GOOGLE_CHECK(file != NULL);
  CmdPacket_descriptor_ = file->message_type(0);
  static const int CmdPacket_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CmdPacket, targetuuid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CmdPacket, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CmdPacket, argument_),
  };
  CmdPacket_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      CmdPacket_descriptor_,
      CmdPacket::internal_default_instance(),
      CmdPacket_offsets_,
      -1,
      -1,
      -1,
      sizeof(CmdPacket),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CmdPacket, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Proto_2fCmdPacket_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      CmdPacket_descriptor_, CmdPacket::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Proto_2fCmdPacket_2eproto() {
  CmdPacket_default_instance_.Shutdown();
  delete CmdPacket_reflection_;
}

void protobuf_InitDefaults_Proto_2fCmdPacket_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  CmdPacket_default_instance_.DefaultConstruct();
  CmdPacket_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_Proto_2fCmdPacket_2eproto_once_);
void protobuf_InitDefaults_Proto_2fCmdPacket_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_Proto_2fCmdPacket_2eproto_once_,
                 &protobuf_InitDefaults_Proto_2fCmdPacket_2eproto_impl);
}
void protobuf_AddDesc_Proto_2fCmdPacket_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_Proto_2fCmdPacket_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\025Proto/CmdPacket.proto\"\?\n\tCmdPacket\022\022\n\n"
    "TargetUUID\030\001 \001(\t\022\014\n\004Name\030\002 \001(\t\022\020\n\010Argume"
    "nt\030\003 \001(\014b\006proto3", 96);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Proto/CmdPacket.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Proto_2fCmdPacket_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_Proto_2fCmdPacket_2eproto_once_);
void protobuf_AddDesc_Proto_2fCmdPacket_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_Proto_2fCmdPacket_2eproto_once_,
                 &protobuf_AddDesc_Proto_2fCmdPacket_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Proto_2fCmdPacket_2eproto {
  StaticDescriptorInitializer_Proto_2fCmdPacket_2eproto() {
    protobuf_AddDesc_Proto_2fCmdPacket_2eproto();
  }
} static_descriptor_initializer_Proto_2fCmdPacket_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CmdPacket::kTargetUUIDFieldNumber;
const int CmdPacket::kNameFieldNumber;
const int CmdPacket::kArgumentFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CmdPacket::CmdPacket()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_Proto_2fCmdPacket_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:CmdPacket)
}

void CmdPacket::InitAsDefaultInstance() {
}

CmdPacket::CmdPacket(const CmdPacket& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:CmdPacket)
}

void CmdPacket::SharedCtor() {
  targetuuid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  argument_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

CmdPacket::~CmdPacket() {
  // @@protoc_insertion_point(destructor:CmdPacket)
  SharedDtor();
}

void CmdPacket::SharedDtor() {
  targetuuid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  argument_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void CmdPacket::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CmdPacket::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CmdPacket_descriptor_;
}

const CmdPacket& CmdPacket::default_instance() {
  protobuf_InitDefaults_Proto_2fCmdPacket_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<CmdPacket> CmdPacket_default_instance_;

CmdPacket* CmdPacket::New(::google::protobuf::Arena* arena) const {
  CmdPacket* n = new CmdPacket;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CmdPacket::Clear() {
// @@protoc_insertion_point(message_clear_start:CmdPacket)
  targetuuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  argument_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool CmdPacket::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:CmdPacket)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string TargetUUID = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_targetuuid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->targetuuid().data(), this->targetuuid().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "CmdPacket.TargetUUID"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_Name;
        break;
      }

      // optional string Name = 2;
      case 2: {
        if (tag == 18) {
         parse_Name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "CmdPacket.Name"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_Argument;
        break;
      }

      // optional bytes Argument = 3;
      case 3: {
        if (tag == 26) {
         parse_Argument:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_argument()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:CmdPacket)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:CmdPacket)
  return false;
#undef DO_
}

void CmdPacket::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:CmdPacket)
  // optional string TargetUUID = 1;
  if (this->targetuuid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->targetuuid().data(), this->targetuuid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "CmdPacket.TargetUUID");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->targetuuid(), output);
  }

  // optional string Name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "CmdPacket.Name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  // optional bytes Argument = 3;
  if (this->argument().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      3, this->argument(), output);
  }

  // @@protoc_insertion_point(serialize_end:CmdPacket)
}

::google::protobuf::uint8* CmdPacket::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:CmdPacket)
  // optional string TargetUUID = 1;
  if (this->targetuuid().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->targetuuid().data(), this->targetuuid().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "CmdPacket.TargetUUID");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->targetuuid(), target);
  }

  // optional string Name = 2;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "CmdPacket.Name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  // optional bytes Argument = 3;
  if (this->argument().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        3, this->argument(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:CmdPacket)
  return target;
}

size_t CmdPacket::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:CmdPacket)
  size_t total_size = 0;

  // optional string TargetUUID = 1;
  if (this->targetuuid().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->targetuuid());
  }

  // optional string Name = 2;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  // optional bytes Argument = 3;
  if (this->argument().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->argument());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CmdPacket::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:CmdPacket)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const CmdPacket* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CmdPacket>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:CmdPacket)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:CmdPacket)
    UnsafeMergeFrom(*source);
  }
}

void CmdPacket::MergeFrom(const CmdPacket& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:CmdPacket)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void CmdPacket::UnsafeMergeFrom(const CmdPacket& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.targetuuid().size() > 0) {

    targetuuid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.targetuuid_);
  }
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.argument().size() > 0) {

    argument_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.argument_);
  }
}

void CmdPacket::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:CmdPacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CmdPacket::CopyFrom(const CmdPacket& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:CmdPacket)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool CmdPacket::IsInitialized() const {

  return true;
}

void CmdPacket::Swap(CmdPacket* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CmdPacket::InternalSwap(CmdPacket* other) {
  targetuuid_.Swap(&other->targetuuid_);
  name_.Swap(&other->name_);
  argument_.Swap(&other->argument_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CmdPacket::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CmdPacket_descriptor_;
  metadata.reflection = CmdPacket_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CmdPacket

// optional string TargetUUID = 1;
void CmdPacket::clear_targetuuid() {
  targetuuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& CmdPacket::targetuuid() const {
  // @@protoc_insertion_point(field_get:CmdPacket.TargetUUID)
  return targetuuid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void CmdPacket::set_targetuuid(const ::std::string& value) {
  
  targetuuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:CmdPacket.TargetUUID)
}
void CmdPacket::set_targetuuid(const char* value) {
  
  targetuuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:CmdPacket.TargetUUID)
}
void CmdPacket::set_targetuuid(const char* value, size_t size) {
  
  targetuuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:CmdPacket.TargetUUID)
}
::std::string* CmdPacket::mutable_targetuuid() {
  
  // @@protoc_insertion_point(field_mutable:CmdPacket.TargetUUID)
  return targetuuid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* CmdPacket::release_targetuuid() {
  // @@protoc_insertion_point(field_release:CmdPacket.TargetUUID)
  
  return targetuuid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void CmdPacket::set_allocated_targetuuid(::std::string* targetuuid) {
  if (targetuuid != NULL) {
    
  } else {
    
  }
  targetuuid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), targetuuid);
  // @@protoc_insertion_point(field_set_allocated:CmdPacket.TargetUUID)
}

// optional string Name = 2;
void CmdPacket::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& CmdPacket::name() const {
  // @@protoc_insertion_point(field_get:CmdPacket.Name)
  return name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void CmdPacket::set_name(const ::std::string& value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:CmdPacket.Name)
}
void CmdPacket::set_name(const char* value) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:CmdPacket.Name)
}
void CmdPacket::set_name(const char* value, size_t size) {
  
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:CmdPacket.Name)
}
::std::string* CmdPacket::mutable_name() {
  
  // @@protoc_insertion_point(field_mutable:CmdPacket.Name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* CmdPacket::release_name() {
  // @@protoc_insertion_point(field_release:CmdPacket.Name)
  
  return name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void CmdPacket::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    
  } else {
    
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:CmdPacket.Name)
}

// optional bytes Argument = 3;
void CmdPacket::clear_argument() {
  argument_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
const ::std::string& CmdPacket::argument() const {
  // @@protoc_insertion_point(field_get:CmdPacket.Argument)
  return argument_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void CmdPacket::set_argument(const ::std::string& value) {
  
  argument_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:CmdPacket.Argument)
}
void CmdPacket::set_argument(const char* value) {
  
  argument_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:CmdPacket.Argument)
}
void CmdPacket::set_argument(const void* value, size_t size) {
  
  argument_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:CmdPacket.Argument)
}
::std::string* CmdPacket::mutable_argument() {
  
  // @@protoc_insertion_point(field_mutable:CmdPacket.Argument)
  return argument_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* CmdPacket::release_argument() {
  // @@protoc_insertion_point(field_release:CmdPacket.Argument)
  
  return argument_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void CmdPacket::set_allocated_argument(::std::string* argument) {
  if (argument != NULL) {
    
  } else {
    
  }
  argument_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), argument);
  // @@protoc_insertion_point(field_set_allocated:CmdPacket.Argument)
}

inline const CmdPacket* CmdPacket::internal_default_instance() {
  return &CmdPacket_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
