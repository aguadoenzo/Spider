// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Proto/ListUUIDSCommandResponse.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ListUUIDSCommandResponse.pb.h"

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

const ::google::protobuf::Descriptor* ListUUIDSCommandResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ListUUIDSCommandResponse_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Proto_2fListUUIDSCommandResponse_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_Proto_2fListUUIDSCommandResponse_2eproto() {
  protobuf_AddDesc_Proto_2fListUUIDSCommandResponse_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Proto/ListUUIDSCommandResponse.proto");
  GOOGLE_CHECK(file != NULL);
  ListUUIDSCommandResponse_descriptor_ = file->message_type(0);
  static const int ListUUIDSCommandResponse_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ListUUIDSCommandResponse, uuid_),
  };
  ListUUIDSCommandResponse_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ListUUIDSCommandResponse_descriptor_,
      ListUUIDSCommandResponse::internal_default_instance(),
      ListUUIDSCommandResponse_offsets_,
      -1,
      -1,
      -1,
      sizeof(ListUUIDSCommandResponse),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ListUUIDSCommandResponse, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Proto_2fListUUIDSCommandResponse_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ListUUIDSCommandResponse_descriptor_, ListUUIDSCommandResponse::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Proto_2fListUUIDSCommandResponse_2eproto() {
  ListUUIDSCommandResponse_default_instance_.Shutdown();
  delete ListUUIDSCommandResponse_reflection_;
}

void protobuf_InitDefaults_Proto_2fListUUIDSCommandResponse_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  ListUUIDSCommandResponse_default_instance_.DefaultConstruct();
  ListUUIDSCommandResponse_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_Proto_2fListUUIDSCommandResponse_2eproto_once_);
void protobuf_InitDefaults_Proto_2fListUUIDSCommandResponse_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_Proto_2fListUUIDSCommandResponse_2eproto_once_,
                 &protobuf_InitDefaults_Proto_2fListUUIDSCommandResponse_2eproto_impl);
}
void protobuf_AddDesc_Proto_2fListUUIDSCommandResponse_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_Proto_2fListUUIDSCommandResponse_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n$Proto/ListUUIDSCommandResponse.proto\"("
    "\n\030ListUUIDSCommandResponse\022\014\n\004uuid\030\001 \003(\t"
    "b\006proto3", 88);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Proto/ListUUIDSCommandResponse.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Proto_2fListUUIDSCommandResponse_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_Proto_2fListUUIDSCommandResponse_2eproto_once_);
void protobuf_AddDesc_Proto_2fListUUIDSCommandResponse_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_Proto_2fListUUIDSCommandResponse_2eproto_once_,
                 &protobuf_AddDesc_Proto_2fListUUIDSCommandResponse_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Proto_2fListUUIDSCommandResponse_2eproto {
  StaticDescriptorInitializer_Proto_2fListUUIDSCommandResponse_2eproto() {
    protobuf_AddDesc_Proto_2fListUUIDSCommandResponse_2eproto();
  }
} static_descriptor_initializer_Proto_2fListUUIDSCommandResponse_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ListUUIDSCommandResponse::kUuidFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ListUUIDSCommandResponse::ListUUIDSCommandResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_Proto_2fListUUIDSCommandResponse_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:ListUUIDSCommandResponse)
}

void ListUUIDSCommandResponse::InitAsDefaultInstance() {
}

ListUUIDSCommandResponse::ListUUIDSCommandResponse(const ListUUIDSCommandResponse& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ListUUIDSCommandResponse)
}

void ListUUIDSCommandResponse::SharedCtor() {
  _cached_size_ = 0;
}

ListUUIDSCommandResponse::~ListUUIDSCommandResponse() {
  // @@protoc_insertion_point(destructor:ListUUIDSCommandResponse)
  SharedDtor();
}

void ListUUIDSCommandResponse::SharedDtor() {
}

void ListUUIDSCommandResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ListUUIDSCommandResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ListUUIDSCommandResponse_descriptor_;
}

const ListUUIDSCommandResponse& ListUUIDSCommandResponse::default_instance() {
  protobuf_InitDefaults_Proto_2fListUUIDSCommandResponse_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<ListUUIDSCommandResponse> ListUUIDSCommandResponse_default_instance_;

ListUUIDSCommandResponse* ListUUIDSCommandResponse::New(::google::protobuf::Arena* arena) const {
  ListUUIDSCommandResponse* n = new ListUUIDSCommandResponse;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ListUUIDSCommandResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:ListUUIDSCommandResponse)
  uuid_.Clear();
}

bool ListUUIDSCommandResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ListUUIDSCommandResponse)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated string uuid = 1;
      case 1: {
        if (tag == 10) {
         parse_uuid:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_uuid()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->uuid(this->uuid_size() - 1).data(),
            this->uuid(this->uuid_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "ListUUIDSCommandResponse.uuid"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(10)) goto parse_uuid;
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
  // @@protoc_insertion_point(parse_success:ListUUIDSCommandResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ListUUIDSCommandResponse)
  return false;
#undef DO_
}

void ListUUIDSCommandResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ListUUIDSCommandResponse)
  // repeated string uuid = 1;
  for (int i = 0; i < this->uuid_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->uuid(i).data(), this->uuid(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ListUUIDSCommandResponse.uuid");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->uuid(i), output);
  }

  // @@protoc_insertion_point(serialize_end:ListUUIDSCommandResponse)
}

::google::protobuf::uint8* ListUUIDSCommandResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:ListUUIDSCommandResponse)
  // repeated string uuid = 1;
  for (int i = 0; i < this->uuid_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->uuid(i).data(), this->uuid(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "ListUUIDSCommandResponse.uuid");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(1, this->uuid(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:ListUUIDSCommandResponse)
  return target;
}

size_t ListUUIDSCommandResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ListUUIDSCommandResponse)
  size_t total_size = 0;

  // repeated string uuid = 1;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->uuid_size());
  for (int i = 0; i < this->uuid_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->uuid(i));
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ListUUIDSCommandResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:ListUUIDSCommandResponse)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ListUUIDSCommandResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ListUUIDSCommandResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:ListUUIDSCommandResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:ListUUIDSCommandResponse)
    UnsafeMergeFrom(*source);
  }
}

void ListUUIDSCommandResponse::MergeFrom(const ListUUIDSCommandResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ListUUIDSCommandResponse)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void ListUUIDSCommandResponse::UnsafeMergeFrom(const ListUUIDSCommandResponse& from) {
  GOOGLE_DCHECK(&from != this);
  uuid_.UnsafeMergeFrom(from.uuid_);
}

void ListUUIDSCommandResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:ListUUIDSCommandResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ListUUIDSCommandResponse::CopyFrom(const ListUUIDSCommandResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ListUUIDSCommandResponse)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool ListUUIDSCommandResponse::IsInitialized() const {

  return true;
}

void ListUUIDSCommandResponse::Swap(ListUUIDSCommandResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ListUUIDSCommandResponse::InternalSwap(ListUUIDSCommandResponse* other) {
  uuid_.UnsafeArenaSwap(&other->uuid_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ListUUIDSCommandResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ListUUIDSCommandResponse_descriptor_;
  metadata.reflection = ListUUIDSCommandResponse_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ListUUIDSCommandResponse

// repeated string uuid = 1;
int ListUUIDSCommandResponse::uuid_size() const {
  return uuid_.size();
}
void ListUUIDSCommandResponse::clear_uuid() {
  uuid_.Clear();
}
const ::std::string& ListUUIDSCommandResponse::uuid(int index) const {
  // @@protoc_insertion_point(field_get:ListUUIDSCommandResponse.uuid)
  return uuid_.Get(index);
}
::std::string* ListUUIDSCommandResponse::mutable_uuid(int index) {
  // @@protoc_insertion_point(field_mutable:ListUUIDSCommandResponse.uuid)
  return uuid_.Mutable(index);
}
void ListUUIDSCommandResponse::set_uuid(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:ListUUIDSCommandResponse.uuid)
  uuid_.Mutable(index)->assign(value);
}
void ListUUIDSCommandResponse::set_uuid(int index, const char* value) {
  uuid_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:ListUUIDSCommandResponse.uuid)
}
void ListUUIDSCommandResponse::set_uuid(int index, const char* value, size_t size) {
  uuid_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:ListUUIDSCommandResponse.uuid)
}
::std::string* ListUUIDSCommandResponse::add_uuid() {
  // @@protoc_insertion_point(field_add_mutable:ListUUIDSCommandResponse.uuid)
  return uuid_.Add();
}
void ListUUIDSCommandResponse::add_uuid(const ::std::string& value) {
  uuid_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:ListUUIDSCommandResponse.uuid)
}
void ListUUIDSCommandResponse::add_uuid(const char* value) {
  uuid_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:ListUUIDSCommandResponse.uuid)
}
void ListUUIDSCommandResponse::add_uuid(const char* value, size_t size) {
  uuid_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:ListUUIDSCommandResponse.uuid)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
ListUUIDSCommandResponse::uuid() const {
  // @@protoc_insertion_point(field_list:ListUUIDSCommandResponse.uuid)
  return uuid_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
ListUUIDSCommandResponse::mutable_uuid() {
  // @@protoc_insertion_point(field_mutable_list:ListUUIDSCommandResponse.uuid)
  return &uuid_;
}

inline const ListUUIDSCommandResponse* ListUUIDSCommandResponse::internal_default_instance() {
  return &ListUUIDSCommandResponse_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
