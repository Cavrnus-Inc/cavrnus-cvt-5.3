// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/unittest_no_generic_services.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021006 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto;
namespace protobuf_unittest {
namespace no_generic_services_test {
class TestMessage;
struct TestMessageDefaultTypeInternal;
extern TestMessageDefaultTypeInternal _TestMessage_default_instance_;
}  // namespace no_generic_services_test
}  // namespace protobuf_unittest
PROTOBUF_NAMESPACE_OPEN
template<> ::protobuf_unittest::no_generic_services_test::TestMessage* Arena::CreateMaybeMessage<::protobuf_unittest::no_generic_services_test::TestMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace protobuf_unittest {
namespace no_generic_services_test {

enum TestEnum : int {
  FOO = 1
};
bool TestEnum_IsValid(int value);
constexpr TestEnum TestEnum_MIN = FOO;
constexpr TestEnum TestEnum_MAX = FOO;
constexpr int TestEnum_ARRAYSIZE = TestEnum_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TestEnum_descriptor();
template<typename T>
inline const std::string& TestEnum_Name(T enum_t_value) {
  static_assert(::std::is_same<T, TestEnum>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function TestEnum_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    TestEnum_descriptor(), enum_t_value);
}
inline bool TestEnum_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, TestEnum* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<TestEnum>(
    TestEnum_descriptor(), name, value);
}
// ===================================================================

class TestMessage final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:protobuf_unittest.no_generic_services_test.TestMessage) */ {
 public:
  inline TestMessage() : TestMessage(nullptr) {}
  ~TestMessage() override;
  explicit PROTOBUF_CONSTEXPR TestMessage(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TestMessage(const TestMessage& from);
  TestMessage(TestMessage&& from) noexcept
    : TestMessage() {
    *this = ::std::move(from);
  }

  inline TestMessage& operator=(const TestMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline TestMessage& operator=(TestMessage&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const TestMessage& default_instance() {
    return *internal_default_instance();
  }
  static inline const TestMessage* internal_default_instance() {
    return reinterpret_cast<const TestMessage*>(
               &_TestMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TestMessage& a, TestMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(TestMessage* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(TestMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TestMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TestMessage>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TestMessage& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const TestMessage& from) {
    TestMessage::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TestMessage* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "protobuf_unittest.no_generic_services_test.TestMessage";
  }
  protected:
  explicit TestMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAFieldNumber = 1,
  };
  // optional int32 a = 1;
  bool has_a() const;
  private:
  bool _internal_has_a() const;
  public:
  void clear_a();
  int32_t a() const;
  void set_a(int32_t value);
  private:
  int32_t _internal_a() const;
  void _internal_set_a(int32_t value);
  public:


  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline bool HasExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TestMessage, _proto_TypeTraits, _field_type, _is_packed>& id) const {

    return _impl_._extensions_.Has(id.number());
  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline void ClearExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TestMessage, _proto_TypeTraits, _field_type, _is_packed>& id) {
    _impl_._extensions_.ClearExtension(id.number());

  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline int ExtensionSize(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TestMessage, _proto_TypeTraits, _field_type, _is_packed>& id) const {

    return _impl_._extensions_.ExtensionSize(id.number());
  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline typename _proto_TypeTraits::Singular::ConstType GetExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TestMessage, _proto_TypeTraits, _field_type, _is_packed>& id) const {

    return _proto_TypeTraits::Get(id.number(), _impl_._extensions_,
                                  id.default_value());
  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline typename _proto_TypeTraits::Singular::MutableType MutableExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TestMessage, _proto_TypeTraits, _field_type, _is_packed>& id) {

    return _proto_TypeTraits::Mutable(id.number(), _field_type,
                                      &_impl_._extensions_);
  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline void SetExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TestMessage, _proto_TypeTraits, _field_type, _is_packed>& id,
      typename _proto_TypeTraits::Singular::ConstType value) {
    _proto_TypeTraits::Set(id.number(), _field_type, value, &_impl_._extensions_);

  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline void SetAllocatedExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TestMessage, _proto_TypeTraits, _field_type, _is_packed>& id,
      typename _proto_TypeTraits::Singular::MutableType value) {
    _proto_TypeTraits::SetAllocated(id.number(), _field_type, value,
                                    &_impl_._extensions_);

  }
  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline void UnsafeArenaSetAllocatedExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TestMessage, _proto_TypeTraits, _field_type, _is_packed>& id,
      typename _proto_TypeTraits::Singular::MutableType value) {
    _proto_TypeTraits::UnsafeArenaSetAllocated(id.number(), _field_type,
                                               value, &_impl_._extensions_);

  }
  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  PROTOBUF_NODISCARD inline
      typename _proto_TypeTraits::Singular::MutableType
      ReleaseExtension(
          const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
              TestMessage, _proto_TypeTraits, _field_type, _is_packed>& id) {

    return _proto_TypeTraits::Release(id.number(), _field_type,
                                      &_impl_._extensions_);
  }
  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline typename _proto_TypeTraits::Singular::MutableType
  UnsafeArenaReleaseExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TestMessage, _proto_TypeTraits, _field_type, _is_packed>& id) {

    return _proto_TypeTraits::UnsafeArenaRelease(id.number(), _field_type,
                                                 &_impl_._extensions_);
  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline typename _proto_TypeTraits::Repeated::ConstType GetExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TestMessage, _proto_TypeTraits, _field_type, _is_packed>& id,
      int index) const {

    return _proto_TypeTraits::Get(id.number(), _impl_._extensions_, index);
  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline typename _proto_TypeTraits::Repeated::MutableType MutableExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TestMessage, _proto_TypeTraits, _field_type, _is_packed>& id,
      int index) {

    return _proto_TypeTraits::Mutable(id.number(), index, &_impl_._extensions_);
  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline void SetExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TestMessage, _proto_TypeTraits, _field_type, _is_packed>& id,
      int index, typename _proto_TypeTraits::Repeated::ConstType value) {
    _proto_TypeTraits::Set(id.number(), index, value, &_impl_._extensions_);

  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline typename _proto_TypeTraits::Repeated::MutableType AddExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TestMessage, _proto_TypeTraits, _field_type, _is_packed>& id) {
    typename _proto_TypeTraits::Repeated::MutableType to_add =
        _proto_TypeTraits::Add(id.number(), _field_type, &_impl_._extensions_);

    return to_add;
  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline void AddExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TestMessage, _proto_TypeTraits, _field_type, _is_packed>& id,
      typename _proto_TypeTraits::Repeated::ConstType value) {
    _proto_TypeTraits::Add(id.number(), _field_type, _is_packed, value,
                           &_impl_._extensions_);

  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline const typename _proto_TypeTraits::Repeated::RepeatedFieldType&
  GetRepeatedExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TestMessage, _proto_TypeTraits, _field_type, _is_packed>& id) const {

    return _proto_TypeTraits::GetRepeated(id.number(), _impl_._extensions_);
  }

  template <typename _proto_TypeTraits,
            ::PROTOBUF_NAMESPACE_ID::internal::FieldType _field_type,
            bool _is_packed>
  inline typename _proto_TypeTraits::Repeated::RepeatedFieldType*
  MutableRepeatedExtension(
      const ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier<
          TestMessage, _proto_TypeTraits, _field_type, _is_packed>& id) {

    return _proto_TypeTraits::MutableRepeated(id.number(), _field_type,
                                              _is_packed, &_impl_._extensions_);
  }

  // @@protoc_insertion_point(class_scope:protobuf_unittest.no_generic_services_test.TestMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ExtensionSet _extensions_;

    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    int32_t a_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto;
};
// ===================================================================

static const int kTestExtensionFieldNumber = 1000;
extern ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::protobuf_unittest::no_generic_services_test::TestMessage,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< int32_t >, 5, false >
  test_extension;

// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TestMessage

// optional int32 a = 1;
inline bool TestMessage::_internal_has_a() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool TestMessage::has_a() const {
  return _internal_has_a();
}
inline void TestMessage::clear_a() {
  _impl_.a_ = 0;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline int32_t TestMessage::_internal_a() const {
  return _impl_.a_;
}
inline int32_t TestMessage::a() const {
  // @@protoc_insertion_point(field_get:protobuf_unittest.no_generic_services_test.TestMessage.a)
  return _internal_a();
}
inline void TestMessage::_internal_set_a(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.a_ = value;
}
inline void TestMessage::set_a(int32_t value) {
  _internal_set_a(value);
  // @@protoc_insertion_point(field_set:protobuf_unittest.no_generic_services_test.TestMessage.a)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace no_generic_services_test
}  // namespace protobuf_unittest

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::protobuf_unittest::no_generic_services_test::TestEnum> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::protobuf_unittest::no_generic_services_test::TestEnum>() {
  return ::protobuf_unittest::no_generic_services_test::TestEnum_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_google_2fprotobuf_2funittest_5fno_5fgeneric_5fservices_2eproto
