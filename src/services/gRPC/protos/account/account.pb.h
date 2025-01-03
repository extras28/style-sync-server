// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: account.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_account_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_account_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5027002
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_bases.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_account_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_account_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_account_2eproto;
class AccountDetail;
struct AccountDetailDefaultTypeInternal;
extern AccountDetailDefaultTypeInternal _AccountDetail_default_instance_;
class GetAllAccountResponse;
struct GetAllAccountResponseDefaultTypeInternal;
extern GetAllAccountResponseDefaultTypeInternal _GetAllAccountResponse_default_instance_;
class Request;
struct RequestDefaultTypeInternal;
extern RequestDefaultTypeInternal _Request_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class Request final : public ::google::protobuf::internal::ZeroFieldsBase
/* @@protoc_insertion_point(class_definition:Request) */ {
 public:
  inline Request() : Request(nullptr) {}
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Request(
      ::google::protobuf::internal::ConstantInitialized);

  inline Request(const Request& from) : Request(nullptr, from) {}
  inline Request(Request&& from) noexcept
      : Request(nullptr, std::move(from)) {}
  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }
  inline Request& operator=(Request&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Request& default_instance() {
    return *internal_default_instance();
  }
  static inline const Request* internal_default_instance() {
    return reinterpret_cast<const Request*>(
        &_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(Request& a, Request& b) { a.Swap(&b); }
  inline void Swap(Request* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Request* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Request* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::internal::ZeroFieldsBase::DefaultConstruct<Request>(arena);
  }
  using ::google::protobuf::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const Request& from) {
    ::google::protobuf::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::google::protobuf::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const Request& from) {
    ::google::protobuf::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }

  public:
  bool IsInitialized() const {
    return true;
  }
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "Request"; }

 protected:
  explicit Request(::google::protobuf::Arena* arena);
  Request(::google::protobuf::Arena* arena, const Request& from);
  Request(::google::protobuf::Arena* arena, Request&& from) noexcept
      : Request(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::internal::ZeroFieldsBase::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  // @@protoc_insertion_point(class_scope:Request)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 0, 0,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_Request_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const Request& from_msg);
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  friend struct ::TableStruct_account_2eproto;
};
// -------------------------------------------------------------------

class AccountDetail final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:AccountDetail) */ {
 public:
  inline AccountDetail() : AccountDetail(nullptr) {}
  ~AccountDetail() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR AccountDetail(
      ::google::protobuf::internal::ConstantInitialized);

  inline AccountDetail(const AccountDetail& from) : AccountDetail(nullptr, from) {}
  inline AccountDetail(AccountDetail&& from) noexcept
      : AccountDetail(nullptr, std::move(from)) {}
  inline AccountDetail& operator=(const AccountDetail& from) {
    CopyFrom(from);
    return *this;
  }
  inline AccountDetail& operator=(AccountDetail&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const AccountDetail& default_instance() {
    return *internal_default_instance();
  }
  static inline const AccountDetail* internal_default_instance() {
    return reinterpret_cast<const AccountDetail*>(
        &_AccountDetail_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 2;
  friend void swap(AccountDetail& a, AccountDetail& b) { a.Swap(&b); }
  inline void Swap(AccountDetail* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(AccountDetail* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AccountDetail* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<AccountDetail>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const AccountDetail& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const AccountDetail& from) { AccountDetail::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(AccountDetail* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "AccountDetail"; }

 protected:
  explicit AccountDetail(::google::protobuf::Arena* arena);
  AccountDetail(::google::protobuf::Arena* arena, const AccountDetail& from);
  AccountDetail(::google::protobuf::Arena* arena, AccountDetail&& from) noexcept
      : AccountDetail(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kIdFieldNumber = 1,
    kUsernameFieldNumber = 2,
    kFullnameFieldNumber = 3,
    kEmailFieldNumber = 4,
    kPhoneFieldNumber = 5,
    kAvatarFieldNumber = 6,
  };
  // string id = 1;
  void clear_id() ;
  const std::string& id() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_id(Arg_&& arg, Args_... args);
  std::string* mutable_id();
  PROTOBUF_NODISCARD std::string* release_id();
  void set_allocated_id(std::string* value);

  private:
  const std::string& _internal_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_id(
      const std::string& value);
  std::string* _internal_mutable_id();

  public:
  // string username = 2;
  void clear_username() ;
  const std::string& username() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_username(Arg_&& arg, Args_... args);
  std::string* mutable_username();
  PROTOBUF_NODISCARD std::string* release_username();
  void set_allocated_username(std::string* value);

  private:
  const std::string& _internal_username() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_username(
      const std::string& value);
  std::string* _internal_mutable_username();

  public:
  // string fullname = 3;
  void clear_fullname() ;
  const std::string& fullname() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_fullname(Arg_&& arg, Args_... args);
  std::string* mutable_fullname();
  PROTOBUF_NODISCARD std::string* release_fullname();
  void set_allocated_fullname(std::string* value);

  private:
  const std::string& _internal_fullname() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_fullname(
      const std::string& value);
  std::string* _internal_mutable_fullname();

  public:
  // string email = 4;
  void clear_email() ;
  const std::string& email() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_email(Arg_&& arg, Args_... args);
  std::string* mutable_email();
  PROTOBUF_NODISCARD std::string* release_email();
  void set_allocated_email(std::string* value);

  private:
  const std::string& _internal_email() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_email(
      const std::string& value);
  std::string* _internal_mutable_email();

  public:
  // string phone = 5;
  void clear_phone() ;
  const std::string& phone() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_phone(Arg_&& arg, Args_... args);
  std::string* mutable_phone();
  PROTOBUF_NODISCARD std::string* release_phone();
  void set_allocated_phone(std::string* value);

  private:
  const std::string& _internal_phone() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_phone(
      const std::string& value);
  std::string* _internal_mutable_phone();

  public:
  // string avatar = 6;
  void clear_avatar() ;
  const std::string& avatar() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_avatar(Arg_&& arg, Args_... args);
  std::string* mutable_avatar();
  PROTOBUF_NODISCARD std::string* release_avatar();
  void set_allocated_avatar(std::string* value);

  private:
  const std::string& _internal_avatar() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_avatar(
      const std::string& value);
  std::string* _internal_mutable_avatar();

  public:
  // @@protoc_insertion_point(class_scope:AccountDetail)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      3, 6, 0,
      56, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_AccountDetail_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const AccountDetail& from_msg);
    ::google::protobuf::internal::ArenaStringPtr id_;
    ::google::protobuf::internal::ArenaStringPtr username_;
    ::google::protobuf::internal::ArenaStringPtr fullname_;
    ::google::protobuf::internal::ArenaStringPtr email_;
    ::google::protobuf::internal::ArenaStringPtr phone_;
    ::google::protobuf::internal::ArenaStringPtr avatar_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_account_2eproto;
};
// -------------------------------------------------------------------

class GetAllAccountResponse final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:GetAllAccountResponse) */ {
 public:
  inline GetAllAccountResponse() : GetAllAccountResponse(nullptr) {}
  ~GetAllAccountResponse() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR GetAllAccountResponse(
      ::google::protobuf::internal::ConstantInitialized);

  inline GetAllAccountResponse(const GetAllAccountResponse& from) : GetAllAccountResponse(nullptr, from) {}
  inline GetAllAccountResponse(GetAllAccountResponse&& from) noexcept
      : GetAllAccountResponse(nullptr, std::move(from)) {}
  inline GetAllAccountResponse& operator=(const GetAllAccountResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline GetAllAccountResponse& operator=(GetAllAccountResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const GetAllAccountResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const GetAllAccountResponse* internal_default_instance() {
    return reinterpret_cast<const GetAllAccountResponse*>(
        &_GetAllAccountResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 1;
  friend void swap(GetAllAccountResponse& a, GetAllAccountResponse& b) { a.Swap(&b); }
  inline void Swap(GetAllAccountResponse* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(GetAllAccountResponse* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GetAllAccountResponse* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<GetAllAccountResponse>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const GetAllAccountResponse& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const GetAllAccountResponse& from) { GetAllAccountResponse::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(GetAllAccountResponse* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "GetAllAccountResponse"; }

 protected:
  explicit GetAllAccountResponse(::google::protobuf::Arena* arena);
  GetAllAccountResponse(::google::protobuf::Arena* arena, const GetAllAccountResponse& from);
  GetAllAccountResponse(::google::protobuf::Arena* arena, GetAllAccountResponse&& from) noexcept
      : GetAllAccountResponse(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kAccountsFieldNumber = 1,
  };
  // repeated .AccountDetail accounts = 1;
  int accounts_size() const;
  private:
  int _internal_accounts_size() const;

  public:
  void clear_accounts() ;
  ::AccountDetail* mutable_accounts(int index);
  ::google::protobuf::RepeatedPtrField<::AccountDetail>* mutable_accounts();

  private:
  const ::google::protobuf::RepeatedPtrField<::AccountDetail>& _internal_accounts() const;
  ::google::protobuf::RepeatedPtrField<::AccountDetail>* _internal_mutable_accounts();
  public:
  const ::AccountDetail& accounts(int index) const;
  ::AccountDetail* add_accounts();
  const ::google::protobuf::RepeatedPtrField<::AccountDetail>& accounts() const;
  // @@protoc_insertion_point(class_scope:GetAllAccountResponse)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      0, 1, 1,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_GetAllAccountResponse_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const GetAllAccountResponse& from_msg);
    ::google::protobuf::RepeatedPtrField< ::AccountDetail > accounts_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_account_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Request

// -------------------------------------------------------------------

// GetAllAccountResponse

// repeated .AccountDetail accounts = 1;
inline int GetAllAccountResponse::_internal_accounts_size() const {
  return _internal_accounts().size();
}
inline int GetAllAccountResponse::accounts_size() const {
  return _internal_accounts_size();
}
inline void GetAllAccountResponse::clear_accounts() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.accounts_.Clear();
}
inline ::AccountDetail* GetAllAccountResponse::mutable_accounts(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable:GetAllAccountResponse.accounts)
  return _internal_mutable_accounts()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::AccountDetail>* GetAllAccountResponse::mutable_accounts()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:GetAllAccountResponse.accounts)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _internal_mutable_accounts();
}
inline const ::AccountDetail& GetAllAccountResponse::accounts(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:GetAllAccountResponse.accounts)
  return _internal_accounts().Get(index);
}
inline ::AccountDetail* GetAllAccountResponse::add_accounts() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::AccountDetail* _add = _internal_mutable_accounts()->Add();
  // @@protoc_insertion_point(field_add:GetAllAccountResponse.accounts)
  return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::AccountDetail>& GetAllAccountResponse::accounts() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:GetAllAccountResponse.accounts)
  return _internal_accounts();
}
inline const ::google::protobuf::RepeatedPtrField<::AccountDetail>&
GetAllAccountResponse::_internal_accounts() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.accounts_;
}
inline ::google::protobuf::RepeatedPtrField<::AccountDetail>*
GetAllAccountResponse::_internal_mutable_accounts() {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return &_impl_.accounts_;
}

// -------------------------------------------------------------------

// AccountDetail

// string id = 1;
inline void AccountDetail::clear_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.id_.ClearToEmpty();
}
inline const std::string& AccountDetail::id() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:AccountDetail.id)
  return _internal_id();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void AccountDetail::set_id(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.id_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:AccountDetail.id)
}
inline std::string* AccountDetail::mutable_id() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_id();
  // @@protoc_insertion_point(field_mutable:AccountDetail.id)
  return _s;
}
inline const std::string& AccountDetail::_internal_id() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.id_.Get();
}
inline void AccountDetail::_internal_set_id(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.id_.Set(value, GetArena());
}
inline std::string* AccountDetail::_internal_mutable_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.id_.Mutable( GetArena());
}
inline std::string* AccountDetail::release_id() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:AccountDetail.id)
  return _impl_.id_.Release();
}
inline void AccountDetail::set_allocated_id(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.id_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.id_.IsDefault()) {
          _impl_.id_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AccountDetail.id)
}

// string username = 2;
inline void AccountDetail::clear_username() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.username_.ClearToEmpty();
}
inline const std::string& AccountDetail::username() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:AccountDetail.username)
  return _internal_username();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void AccountDetail::set_username(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.username_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:AccountDetail.username)
}
inline std::string* AccountDetail::mutable_username() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_username();
  // @@protoc_insertion_point(field_mutable:AccountDetail.username)
  return _s;
}
inline const std::string& AccountDetail::_internal_username() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.username_.Get();
}
inline void AccountDetail::_internal_set_username(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.username_.Set(value, GetArena());
}
inline std::string* AccountDetail::_internal_mutable_username() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.username_.Mutable( GetArena());
}
inline std::string* AccountDetail::release_username() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:AccountDetail.username)
  return _impl_.username_.Release();
}
inline void AccountDetail::set_allocated_username(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.username_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.username_.IsDefault()) {
          _impl_.username_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AccountDetail.username)
}

// string fullname = 3;
inline void AccountDetail::clear_fullname() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.fullname_.ClearToEmpty();
}
inline const std::string& AccountDetail::fullname() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:AccountDetail.fullname)
  return _internal_fullname();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void AccountDetail::set_fullname(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.fullname_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:AccountDetail.fullname)
}
inline std::string* AccountDetail::mutable_fullname() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_fullname();
  // @@protoc_insertion_point(field_mutable:AccountDetail.fullname)
  return _s;
}
inline const std::string& AccountDetail::_internal_fullname() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.fullname_.Get();
}
inline void AccountDetail::_internal_set_fullname(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.fullname_.Set(value, GetArena());
}
inline std::string* AccountDetail::_internal_mutable_fullname() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.fullname_.Mutable( GetArena());
}
inline std::string* AccountDetail::release_fullname() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:AccountDetail.fullname)
  return _impl_.fullname_.Release();
}
inline void AccountDetail::set_allocated_fullname(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.fullname_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.fullname_.IsDefault()) {
          _impl_.fullname_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AccountDetail.fullname)
}

// string email = 4;
inline void AccountDetail::clear_email() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.email_.ClearToEmpty();
}
inline const std::string& AccountDetail::email() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:AccountDetail.email)
  return _internal_email();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void AccountDetail::set_email(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.email_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:AccountDetail.email)
}
inline std::string* AccountDetail::mutable_email() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_email();
  // @@protoc_insertion_point(field_mutable:AccountDetail.email)
  return _s;
}
inline const std::string& AccountDetail::_internal_email() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.email_.Get();
}
inline void AccountDetail::_internal_set_email(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.email_.Set(value, GetArena());
}
inline std::string* AccountDetail::_internal_mutable_email() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.email_.Mutable( GetArena());
}
inline std::string* AccountDetail::release_email() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:AccountDetail.email)
  return _impl_.email_.Release();
}
inline void AccountDetail::set_allocated_email(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.email_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.email_.IsDefault()) {
          _impl_.email_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AccountDetail.email)
}

// string phone = 5;
inline void AccountDetail::clear_phone() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.phone_.ClearToEmpty();
}
inline const std::string& AccountDetail::phone() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:AccountDetail.phone)
  return _internal_phone();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void AccountDetail::set_phone(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.phone_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:AccountDetail.phone)
}
inline std::string* AccountDetail::mutable_phone() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_phone();
  // @@protoc_insertion_point(field_mutable:AccountDetail.phone)
  return _s;
}
inline const std::string& AccountDetail::_internal_phone() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.phone_.Get();
}
inline void AccountDetail::_internal_set_phone(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.phone_.Set(value, GetArena());
}
inline std::string* AccountDetail::_internal_mutable_phone() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.phone_.Mutable( GetArena());
}
inline std::string* AccountDetail::release_phone() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:AccountDetail.phone)
  return _impl_.phone_.Release();
}
inline void AccountDetail::set_allocated_phone(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.phone_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.phone_.IsDefault()) {
          _impl_.phone_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AccountDetail.phone)
}

// string avatar = 6;
inline void AccountDetail::clear_avatar() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.avatar_.ClearToEmpty();
}
inline const std::string& AccountDetail::avatar() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:AccountDetail.avatar)
  return _internal_avatar();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void AccountDetail::set_avatar(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.avatar_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:AccountDetail.avatar)
}
inline std::string* AccountDetail::mutable_avatar() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_avatar();
  // @@protoc_insertion_point(field_mutable:AccountDetail.avatar)
  return _s;
}
inline const std::string& AccountDetail::_internal_avatar() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.avatar_.Get();
}
inline void AccountDetail::_internal_set_avatar(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.avatar_.Set(value, GetArena());
}
inline std::string* AccountDetail::_internal_mutable_avatar() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.avatar_.Mutable( GetArena());
}
inline std::string* AccountDetail::release_avatar() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:AccountDetail.avatar)
  return _impl_.avatar_.Release();
}
inline void AccountDetail::set_allocated_avatar(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.avatar_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.avatar_.IsDefault()) {
          _impl_.avatar_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AccountDetail.avatar)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_account_2eproto_2epb_2eh
