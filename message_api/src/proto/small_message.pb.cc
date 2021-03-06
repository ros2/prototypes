// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "small_message.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* SmallMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SmallMessage_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_small_5fmessage_2eproto() {
  protobuf_AddDesc_small_5fmessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "small_message.proto");
  GOOGLE_CHECK(file != NULL);
  SmallMessage_descriptor_ = file->message_type(0);
  static const int SmallMessage_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SmallMessage, foo_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SmallMessage, bar_),
  };
  SmallMessage_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SmallMessage_descriptor_,
      SmallMessage::default_instance_,
      SmallMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SmallMessage, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SmallMessage, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SmallMessage));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_small_5fmessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SmallMessage_descriptor_, &SmallMessage::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_small_5fmessage_2eproto() {
  delete SmallMessage::default_instance_;
  delete SmallMessage_reflection_;
}

void protobuf_AddDesc_small_5fmessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023small_message.proto\"(\n\014SmallMessage\022\013\n"
    "\003foo\030\001 \002(\005\022\013\n\003bar\030\002 \002(\010", 63);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "small_message.proto", &protobuf_RegisterTypes);
  SmallMessage::default_instance_ = new SmallMessage();
  SmallMessage::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_small_5fmessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_small_5fmessage_2eproto {
  StaticDescriptorInitializer_small_5fmessage_2eproto() {
    protobuf_AddDesc_small_5fmessage_2eproto();
  }
} static_descriptor_initializer_small_5fmessage_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int SmallMessage::kFooFieldNumber;
const int SmallMessage::kBarFieldNumber;
#endif  // !_MSC_VER

SmallMessage::SmallMessage()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SmallMessage::InitAsDefaultInstance() {
}

SmallMessage::SmallMessage(const SmallMessage& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SmallMessage::SharedCtor() {
  _cached_size_ = 0;
  foo_ = 0;
  bar_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SmallMessage::~SmallMessage() {
  SharedDtor();
}

void SmallMessage::SharedDtor() {
  if (this != default_instance_) {
  }
}

void SmallMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SmallMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SmallMessage_descriptor_;
}

const SmallMessage& SmallMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_small_5fmessage_2eproto();  return *default_instance_;
}

SmallMessage* SmallMessage::default_instance_ = NULL;

SmallMessage* SmallMessage::New() const {
  return new SmallMessage;
}

void SmallMessage::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    foo_ = 0;
    bar_ = false;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SmallMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 foo = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &foo_)));
          set_has_foo();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_bar;
        break;
      }
      
      // required bool bar = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_bar:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &bar_)));
          set_has_bar();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void SmallMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 foo = 1;
  if (has_foo()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->foo(), output);
  }
  
  // required bool bar = 2;
  if (has_bar()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->bar(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SmallMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 foo = 1;
  if (has_foo()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->foo(), target);
  }
  
  // required bool bar = 2;
  if (has_bar()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->bar(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SmallMessage::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 foo = 1;
    if (has_foo()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->foo());
    }
    
    // required bool bar = 2;
    if (has_bar()) {
      total_size += 1 + 1;
    }
    
  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SmallMessage::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SmallMessage* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SmallMessage*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SmallMessage::MergeFrom(const SmallMessage& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_foo()) {
      set_foo(from.foo());
    }
    if (from.has_bar()) {
      set_bar(from.bar());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SmallMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SmallMessage::CopyFrom(const SmallMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SmallMessage::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  
  return true;
}

void SmallMessage::Swap(SmallMessage* other) {
  if (other != this) {
    std::swap(foo_, other->foo_);
    std::swap(bar_, other->bar_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SmallMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SmallMessage_descriptor_;
  metadata.reflection = SmallMessage_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
