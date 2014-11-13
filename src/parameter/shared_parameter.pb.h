// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: parameter/shared_parameter.proto

#ifndef PROTOBUF_parameter_2fshared_5fparameter_2eproto__INCLUDED
#define PROTOBUF_parameter_2fshared_5fparameter_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "proto/common.pb.h"
// @@protoc_insertion_point(includes)

namespace PS {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_parameter_2fshared_5fparameter_2eproto();
void protobuf_AssignDesc_parameter_2fshared_5fparameter_2eproto();
void protobuf_ShutdownFile_parameter_2fshared_5fparameter_2eproto();

class Timestamp;
class CallSharedPara;

enum CallSharedPara_Command {
  CallSharedPara_Command_PUSH = 1,
  CallSharedPara_Command_PULL = 2
};
bool CallSharedPara_Command_IsValid(int value);
const CallSharedPara_Command CallSharedPara_Command_Command_MIN = CallSharedPara_Command_PUSH;
const CallSharedPara_Command CallSharedPara_Command_Command_MAX = CallSharedPara_Command_PULL;
const int CallSharedPara_Command_Command_ARRAYSIZE = CallSharedPara_Command_Command_MAX + 1;

const ::google::protobuf::EnumDescriptor* CallSharedPara_Command_descriptor();
inline const ::std::string& CallSharedPara_Command_Name(CallSharedPara_Command value) {
  return ::google::protobuf::internal::NameOfEnum(
    CallSharedPara_Command_descriptor(), value);
}
inline bool CallSharedPara_Command_Parse(
    const ::std::string& name, CallSharedPara_Command* value) {
  return ::google::protobuf::internal::ParseNamedEnum<CallSharedPara_Command>(
    CallSharedPara_Command_descriptor(), name, value);
}
// ===================================================================

class Timestamp : public ::google::protobuf::Message {
 public:
  Timestamp();
  virtual ~Timestamp();

  Timestamp(const Timestamp& from);

  inline Timestamp& operator=(const Timestamp& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Timestamp& default_instance();

  void Swap(Timestamp* other);

  // implements Message ----------------------------------------------

  Timestamp* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Timestamp& from);
  void MergeFrom(const Timestamp& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string sender = 1;
  inline bool has_sender() const;
  inline void clear_sender();
  static const int kSenderFieldNumber = 1;
  inline const ::std::string& sender() const;
  inline void set_sender(const ::std::string& value);
  inline void set_sender(const char* value);
  inline void set_sender(const char* value, size_t size);
  inline ::std::string* mutable_sender();
  inline ::std::string* release_sender();
  inline void set_allocated_sender(::std::string* sender);

  // required int32 time = 2;
  inline bool has_time() const;
  inline void clear_time();
  static const int kTimeFieldNumber = 2;
  inline ::google::protobuf::int32 time() const;
  inline void set_time(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:PS.Timestamp)
 private:
  inline void set_has_sender();
  inline void clear_has_sender();
  inline void set_has_time();
  inline void clear_has_time();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::std::string* sender_;
  ::google::protobuf::int32 time_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(2 + 31) / 32];

  friend void  protobuf_AddDesc_parameter_2fshared_5fparameter_2eproto();
  friend void protobuf_AssignDesc_parameter_2fshared_5fparameter_2eproto();
  friend void protobuf_ShutdownFile_parameter_2fshared_5fparameter_2eproto();

  void InitAsDefaultInstance();
  static Timestamp* default_instance_;
};
// -------------------------------------------------------------------

class CallSharedPara : public ::google::protobuf::Message {
 public:
  CallSharedPara();
  virtual ~CallSharedPara();

  CallSharedPara(const CallSharedPara& from);

  inline CallSharedPara& operator=(const CallSharedPara& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const CallSharedPara& default_instance();

  void Swap(CallSharedPara* other);

  // implements Message ----------------------------------------------

  CallSharedPara* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CallSharedPara& from);
  void MergeFrom(const CallSharedPara& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef CallSharedPara_Command Command;
  static const Command PUSH = CallSharedPara_Command_PUSH;
  static const Command PULL = CallSharedPara_Command_PULL;
  static inline bool Command_IsValid(int value) {
    return CallSharedPara_Command_IsValid(value);
  }
  static const Command Command_MIN =
    CallSharedPara_Command_Command_MIN;
  static const Command Command_MAX =
    CallSharedPara_Command_Command_MAX;
  static const int Command_ARRAYSIZE =
    CallSharedPara_Command_Command_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Command_descriptor() {
    return CallSharedPara_Command_descriptor();
  }
  static inline const ::std::string& Command_Name(Command value) {
    return CallSharedPara_Command_Name(value);
  }
  static inline bool Command_Parse(const ::std::string& name,
      Command* value) {
    return CallSharedPara_Command_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .PS.CallSharedPara.Command cmd = 1;
  inline bool has_cmd() const;
  inline void clear_cmd();
  static const int kCmdFieldNumber = 1;
  inline ::PS::CallSharedPara_Command cmd() const;
  inline void set_cmd(::PS::CallSharedPara_Command value);

  // optional .PS.Operator op = 2;
  inline bool has_op() const;
  inline void clear_op();
  static const int kOpFieldNumber = 2;
  inline ::PS::Operator op() const;
  inline void set_op(::PS::Operator value);

  // optional bool insert_key_freq = 3;
  inline bool has_insert_key_freq() const;
  inline void clear_insert_key_freq();
  static const int kInsertKeyFreqFieldNumber = 3;
  inline bool insert_key_freq() const;
  inline void set_insert_key_freq(bool value);

  // optional int32 query_key_freq = 4;
  inline bool has_query_key_freq() const;
  inline void clear_query_key_freq();
  static const int kQueryKeyFreqFieldNumber = 4;
  inline ::google::protobuf::int32 query_key_freq() const;
  inline void set_query_key_freq(::google::protobuf::int32 value);

  // optional bool insert_key = 5;
  inline bool has_insert_key() const;
  inline void clear_insert_key();
  static const int kInsertKeyFieldNumber = 5;
  inline bool insert_key() const;
  inline void set_insert_key(bool value);

  // optional int32 countmin_n = 6;
  inline bool has_countmin_n() const;
  inline void clear_countmin_n();
  static const int kCountminNFieldNumber = 6;
  inline ::google::protobuf::int32 countmin_n() const;
  inline void set_countmin_n(::google::protobuf::int32 value);

  // optional int32 countmin_k = 7;
  inline bool has_countmin_k() const;
  inline void clear_countmin_k();
  static const int kCountminKFieldNumber = 7;
  inline ::google::protobuf::int32 countmin_k() const;
  inline void set_countmin_k(::google::protobuf::int32 value);

  // optional bool replica = 10;
  inline bool has_replica() const;
  inline void clear_replica();
  static const int kReplicaFieldNumber = 10;
  inline bool replica() const;
  inline void set_replica(bool value);

  // repeated .PS.Timestamp backup = 11;
  inline int backup_size() const;
  inline void clear_backup();
  static const int kBackupFieldNumber = 11;
  inline const ::PS::Timestamp& backup(int index) const;
  inline ::PS::Timestamp* mutable_backup(int index);
  inline ::PS::Timestamp* add_backup();
  inline const ::google::protobuf::RepeatedPtrField< ::PS::Timestamp >&
      backup() const;
  inline ::google::protobuf::RepeatedPtrField< ::PS::Timestamp >*
      mutable_backup();

  // @@protoc_insertion_point(class_scope:PS.CallSharedPara)
 private:
  inline void set_has_cmd();
  inline void clear_has_cmd();
  inline void set_has_op();
  inline void clear_has_op();
  inline void set_has_insert_key_freq();
  inline void clear_has_insert_key_freq();
  inline void set_has_query_key_freq();
  inline void clear_has_query_key_freq();
  inline void set_has_insert_key();
  inline void clear_has_insert_key();
  inline void set_has_countmin_n();
  inline void clear_has_countmin_n();
  inline void set_has_countmin_k();
  inline void clear_has_countmin_k();
  inline void set_has_replica();
  inline void clear_has_replica();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  int cmd_;
  int op_;
  ::google::protobuf::int32 query_key_freq_;
  bool insert_key_freq_;
  bool insert_key_;
  bool replica_;
  ::google::protobuf::int32 countmin_n_;
  ::google::protobuf::int32 countmin_k_;
  ::google::protobuf::RepeatedPtrField< ::PS::Timestamp > backup_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(9 + 31) / 32];

  friend void  protobuf_AddDesc_parameter_2fshared_5fparameter_2eproto();
  friend void protobuf_AssignDesc_parameter_2fshared_5fparameter_2eproto();
  friend void protobuf_ShutdownFile_parameter_2fshared_5fparameter_2eproto();

  void InitAsDefaultInstance();
  static CallSharedPara* default_instance_;
};
// ===================================================================


// ===================================================================

// Timestamp

// required string sender = 1;
inline bool Timestamp::has_sender() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Timestamp::set_has_sender() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Timestamp::clear_has_sender() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Timestamp::clear_sender() {
  if (sender_ != &::google::protobuf::internal::kEmptyString) {
    sender_->clear();
  }
  clear_has_sender();
}
inline const ::std::string& Timestamp::sender() const {
  return *sender_;
}
inline void Timestamp::set_sender(const ::std::string& value) {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::kEmptyString) {
    sender_ = new ::std::string;
  }
  sender_->assign(value);
}
inline void Timestamp::set_sender(const char* value) {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::kEmptyString) {
    sender_ = new ::std::string;
  }
  sender_->assign(value);
}
inline void Timestamp::set_sender(const char* value, size_t size) {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::kEmptyString) {
    sender_ = new ::std::string;
  }
  sender_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* Timestamp::mutable_sender() {
  set_has_sender();
  if (sender_ == &::google::protobuf::internal::kEmptyString) {
    sender_ = new ::std::string;
  }
  return sender_;
}
inline ::std::string* Timestamp::release_sender() {
  clear_has_sender();
  if (sender_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = sender_;
    sender_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}
inline void Timestamp::set_allocated_sender(::std::string* sender) {
  if (sender_ != &::google::protobuf::internal::kEmptyString) {
    delete sender_;
  }
  if (sender) {
    set_has_sender();
    sender_ = sender;
  } else {
    clear_has_sender();
    sender_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  }
}

// required int32 time = 2;
inline bool Timestamp::has_time() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Timestamp::set_has_time() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Timestamp::clear_has_time() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Timestamp::clear_time() {
  time_ = 0;
  clear_has_time();
}
inline ::google::protobuf::int32 Timestamp::time() const {
  return time_;
}
inline void Timestamp::set_time(::google::protobuf::int32 value) {
  set_has_time();
  time_ = value;
}

// -------------------------------------------------------------------

// CallSharedPara

// required .PS.CallSharedPara.Command cmd = 1;
inline bool CallSharedPara::has_cmd() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CallSharedPara::set_has_cmd() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CallSharedPara::clear_has_cmd() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CallSharedPara::clear_cmd() {
  cmd_ = 1;
  clear_has_cmd();
}
inline ::PS::CallSharedPara_Command CallSharedPara::cmd() const {
  return static_cast< ::PS::CallSharedPara_Command >(cmd_);
}
inline void CallSharedPara::set_cmd(::PS::CallSharedPara_Command value) {
  assert(::PS::CallSharedPara_Command_IsValid(value));
  set_has_cmd();
  cmd_ = value;
}

// optional .PS.Operator op = 2;
inline bool CallSharedPara::has_op() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CallSharedPara::set_has_op() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CallSharedPara::clear_has_op() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CallSharedPara::clear_op() {
  op_ = 0;
  clear_has_op();
}
inline ::PS::Operator CallSharedPara::op() const {
  return static_cast< ::PS::Operator >(op_);
}
inline void CallSharedPara::set_op(::PS::Operator value) {
  assert(::PS::Operator_IsValid(value));
  set_has_op();
  op_ = value;
}

// optional bool insert_key_freq = 3;
inline bool CallSharedPara::has_insert_key_freq() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CallSharedPara::set_has_insert_key_freq() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CallSharedPara::clear_has_insert_key_freq() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CallSharedPara::clear_insert_key_freq() {
  insert_key_freq_ = false;
  clear_has_insert_key_freq();
}
inline bool CallSharedPara::insert_key_freq() const {
  return insert_key_freq_;
}
inline void CallSharedPara::set_insert_key_freq(bool value) {
  set_has_insert_key_freq();
  insert_key_freq_ = value;
}

// optional int32 query_key_freq = 4;
inline bool CallSharedPara::has_query_key_freq() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CallSharedPara::set_has_query_key_freq() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CallSharedPara::clear_has_query_key_freq() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CallSharedPara::clear_query_key_freq() {
  query_key_freq_ = 0;
  clear_has_query_key_freq();
}
inline ::google::protobuf::int32 CallSharedPara::query_key_freq() const {
  return query_key_freq_;
}
inline void CallSharedPara::set_query_key_freq(::google::protobuf::int32 value) {
  set_has_query_key_freq();
  query_key_freq_ = value;
}

// optional bool insert_key = 5;
inline bool CallSharedPara::has_insert_key() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CallSharedPara::set_has_insert_key() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CallSharedPara::clear_has_insert_key() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CallSharedPara::clear_insert_key() {
  insert_key_ = false;
  clear_has_insert_key();
}
inline bool CallSharedPara::insert_key() const {
  return insert_key_;
}
inline void CallSharedPara::set_insert_key(bool value) {
  set_has_insert_key();
  insert_key_ = value;
}

// optional int32 countmin_n = 6;
inline bool CallSharedPara::has_countmin_n() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void CallSharedPara::set_has_countmin_n() {
  _has_bits_[0] |= 0x00000020u;
}
inline void CallSharedPara::clear_has_countmin_n() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void CallSharedPara::clear_countmin_n() {
  countmin_n_ = 0;
  clear_has_countmin_n();
}
inline ::google::protobuf::int32 CallSharedPara::countmin_n() const {
  return countmin_n_;
}
inline void CallSharedPara::set_countmin_n(::google::protobuf::int32 value) {
  set_has_countmin_n();
  countmin_n_ = value;
}

// optional int32 countmin_k = 7;
inline bool CallSharedPara::has_countmin_k() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void CallSharedPara::set_has_countmin_k() {
  _has_bits_[0] |= 0x00000040u;
}
inline void CallSharedPara::clear_has_countmin_k() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void CallSharedPara::clear_countmin_k() {
  countmin_k_ = 0;
  clear_has_countmin_k();
}
inline ::google::protobuf::int32 CallSharedPara::countmin_k() const {
  return countmin_k_;
}
inline void CallSharedPara::set_countmin_k(::google::protobuf::int32 value) {
  set_has_countmin_k();
  countmin_k_ = value;
}

// optional bool replica = 10;
inline bool CallSharedPara::has_replica() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void CallSharedPara::set_has_replica() {
  _has_bits_[0] |= 0x00000080u;
}
inline void CallSharedPara::clear_has_replica() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void CallSharedPara::clear_replica() {
  replica_ = false;
  clear_has_replica();
}
inline bool CallSharedPara::replica() const {
  return replica_;
}
inline void CallSharedPara::set_replica(bool value) {
  set_has_replica();
  replica_ = value;
}

// repeated .PS.Timestamp backup = 11;
inline int CallSharedPara::backup_size() const {
  return backup_.size();
}
inline void CallSharedPara::clear_backup() {
  backup_.Clear();
}
inline const ::PS::Timestamp& CallSharedPara::backup(int index) const {
  return backup_.Get(index);
}
inline ::PS::Timestamp* CallSharedPara::mutable_backup(int index) {
  return backup_.Mutable(index);
}
inline ::PS::Timestamp* CallSharedPara::add_backup() {
  return backup_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::PS::Timestamp >&
CallSharedPara::backup() const {
  return backup_;
}
inline ::google::protobuf::RepeatedPtrField< ::PS::Timestamp >*
CallSharedPara::mutable_backup() {
  return &backup_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace PS

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::PS::CallSharedPara_Command>() {
  return ::PS::CallSharedPara_Command_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_parameter_2fshared_5fparameter_2eproto__INCLUDED
