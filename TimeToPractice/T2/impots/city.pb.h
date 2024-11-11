// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: city.proto
// Protobuf C++ Version: 5.28.3

#ifndef GOOGLE_PROTOBUF_INCLUDED_city_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_city_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5028003
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
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

#define PROTOBUF_INTERNAL_EXPORT_city_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_city_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_city_2eproto;
class City;
struct CityDefaultTypeInternal;
extern CityDefaultTypeInternal _City_default_instance_;
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google


// ===================================================================


// -------------------------------------------------------------------

class City final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:City) */ {
 public:
  inline City() : City(nullptr) {}
  ~City() PROTOBUF_FINAL;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR City(
      ::google::protobuf::internal::ConstantInitialized);

  inline City(const City& from) : City(nullptr, from) {}
  inline City(City&& from) noexcept
      : City(nullptr, std::move(from)) {}
  inline City& operator=(const City& from) {
    CopyFrom(from);
    return *this;
  }
  inline City& operator=(City&& from) noexcept {
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
  static const City& default_instance() {
    return *internal_default_instance();
  }
  static inline const City* internal_default_instance() {
    return reinterpret_cast<const City*>(
        &_City_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(City& a, City& b) { a.Swap(&b); }
  inline void Swap(City* other) {
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
  void UnsafeArenaSwap(City* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  City* New(::google::protobuf::Arena* arena = nullptr) const PROTOBUF_FINAL {
    return ::google::protobuf::Message::DefaultConstruct<City>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const City& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const City& from) { City::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(City* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "City"; }

 protected:
  explicit City(::google::protobuf::Arena* arena);
  City(::google::protobuf::Arena* arena, const City& from);
  City(::google::protobuf::Arena* arena, City&& from) noexcept
      : City(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const PROTOBUF_FINAL;
  static const ::google::protobuf::Message::ClassDataFull _class_data_;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kNameFieldNumber = 1,
    kCountryNameFieldNumber = 3,
    kZipCodeFieldNumber = 2,
  };
  // string name = 1;
  void clear_name() ;
  const std::string& name() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_name(Arg_&& arg, Args_... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* value);

  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(
      const std::string& value);
  std::string* _internal_mutable_name();

  public:
  // string countryName = 3;
  void clear_countryname() ;
  const std::string& countryname() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_countryname(Arg_&& arg, Args_... args);
  std::string* mutable_countryname();
  PROTOBUF_NODISCARD std::string* release_countryname();
  void set_allocated_countryname(std::string* value);

  private:
  const std::string& _internal_countryname() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_countryname(
      const std::string& value);
  std::string* _internal_mutable_countryname();

  public:
  // int32 zipCode = 2;
  void clear_zipcode() ;
  ::int32_t zipcode() const;
  void set_zipcode(::int32_t value);

  private:
  ::int32_t _internal_zipcode() const;
  void _internal_set_zipcode(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:City)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 0,
      28, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_City_default_instance_;

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
                          const City& from_msg);
    ::google::protobuf::internal::ArenaStringPtr name_;
    ::google::protobuf::internal::ArenaStringPtr countryname_;
    ::int32_t zipcode_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_city_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// City

// string name = 1;
inline void City::clear_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.ClearToEmpty();
}
inline const std::string& City::name() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:City.name)
  return _internal_name();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void City::set_name(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:City.name)
}
inline std::string* City::mutable_name() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:City.name)
  return _s;
}
inline const std::string& City::_internal_name() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.name_.Get();
}
inline void City::_internal_set_name(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.Set(value, GetArena());
}
inline std::string* City::_internal_mutable_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.name_.Mutable( GetArena());
}
inline std::string* City::release_name() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:City.name)
  return _impl_.name_.Release();
}
inline void City::set_allocated_name(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.name_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.name_.IsDefault()) {
          _impl_.name_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:City.name)
}

// int32 zipCode = 2;
inline void City::clear_zipcode() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.zipcode_ = 0;
}
inline ::int32_t City::zipcode() const {
  // @@protoc_insertion_point(field_get:City.zipCode)
  return _internal_zipcode();
}
inline void City::set_zipcode(::int32_t value) {
  _internal_set_zipcode(value);
  // @@protoc_insertion_point(field_set:City.zipCode)
}
inline ::int32_t City::_internal_zipcode() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.zipcode_;
}
inline void City::_internal_set_zipcode(::int32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.zipcode_ = value;
}

// string countryName = 3;
inline void City::clear_countryname() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.countryname_.ClearToEmpty();
}
inline const std::string& City::countryname() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:City.countryName)
  return _internal_countryname();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void City::set_countryname(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.countryname_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:City.countryName)
}
inline std::string* City::mutable_countryname() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_countryname();
  // @@protoc_insertion_point(field_mutable:City.countryName)
  return _s;
}
inline const std::string& City::_internal_countryname() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.countryname_.Get();
}
inline void City::_internal_set_countryname(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.countryname_.Set(value, GetArena());
}
inline std::string* City::_internal_mutable_countryname() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  return _impl_.countryname_.Mutable( GetArena());
}
inline std::string* City::release_countryname() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:City.countryName)
  return _impl_.countryname_.Release();
}
inline void City::set_allocated_countryname(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.countryname_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.countryname_.IsDefault()) {
          _impl_.countryname_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:City.countryName)
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_city_2eproto_2epb_2eh
