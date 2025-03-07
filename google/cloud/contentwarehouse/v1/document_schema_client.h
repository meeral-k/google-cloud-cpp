// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/contentwarehouse/v1/document_schema_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_DOCUMENT_SCHEMA_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_DOCUMENT_SCHEMA_CLIENT_H

#include "google/cloud/contentwarehouse/v1/document_schema_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace contentwarehouse_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// This service lets you manage document schema.
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class DocumentSchemaServiceClient {
 public:
  explicit DocumentSchemaServiceClient(
      std::shared_ptr<DocumentSchemaServiceConnection> connection,
      Options opts = {});
  ~DocumentSchemaServiceClient();

  ///@{
  /// @name Copy and move support
  DocumentSchemaServiceClient(DocumentSchemaServiceClient const&) = default;
  DocumentSchemaServiceClient& operator=(DocumentSchemaServiceClient const&) =
      default;
  DocumentSchemaServiceClient(DocumentSchemaServiceClient&&) = default;
  DocumentSchemaServiceClient& operator=(DocumentSchemaServiceClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(DocumentSchemaServiceClient const& a,
                         DocumentSchemaServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(DocumentSchemaServiceClient const& a,
                         DocumentSchemaServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Creates a document schema.
  ///
  /// @param parent  Required. The parent name.
  /// @param document_schema  Required. The document schema to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.DocumentSchema])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.CreateDocumentSchemaRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema_service.proto#L97}
  /// [google.cloud.contentwarehouse.v1.DocumentSchema]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema.proto#L32}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::DocumentSchema>
  CreateDocumentSchema(
      std::string const& parent,
      google::cloud::contentwarehouse::v1::DocumentSchema const&
          document_schema,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a document schema.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.contentwarehouse.v1.CreateDocumentSchemaRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.DocumentSchema])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.CreateDocumentSchemaRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema_service.proto#L97}
  /// [google.cloud.contentwarehouse.v1.DocumentSchema]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema.proto#L32}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::DocumentSchema>
  CreateDocumentSchema(
      google::cloud::contentwarehouse::v1::CreateDocumentSchemaRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Updates a Document Schema. Returns INVALID_ARGUMENT if the name of the
  /// Document Schema is non-empty and does not equal the existing name.
  /// Supports only appending new properties, adding new ENUM possible values,
  /// and updating the
  /// [EnumTypeOptions.validation_check_disabled][google.cloud.contentwarehouse.v1.EnumTypeOptions.validation_check_disabled]
  /// flag for ENUM possible values. Updating existing properties will result
  /// into INVALID_ARGUMENT.
  ///
  /// @param name  Required. The name of the document schema to update.
  ///  Format:
  ///  projects/{project_number}/locations/{location}/documentSchemas/{document_schema_id}.
  /// @param document_schema  Required. The document schema to update with.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.DocumentSchema])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.DocumentSchema]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema.proto#L32}
  /// [google.cloud.contentwarehouse.v1.EnumTypeOptions.validation_check_disabled]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema.proto#L201}
  /// [google.cloud.contentwarehouse.v1.UpdateDocumentSchemaRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema_service.proto#L122}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::DocumentSchema>
  UpdateDocumentSchema(
      std::string const& name,
      google::cloud::contentwarehouse::v1::DocumentSchema const&
          document_schema,
      Options opts = {});

  // clang-format off
  ///
  /// Updates a Document Schema. Returns INVALID_ARGUMENT if the name of the
  /// Document Schema is non-empty and does not equal the existing name.
  /// Supports only appending new properties, adding new ENUM possible values,
  /// and updating the
  /// [EnumTypeOptions.validation_check_disabled][google.cloud.contentwarehouse.v1.EnumTypeOptions.validation_check_disabled]
  /// flag for ENUM possible values. Updating existing properties will result
  /// into INVALID_ARGUMENT.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.contentwarehouse.v1.UpdateDocumentSchemaRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.DocumentSchema])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.DocumentSchema]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema.proto#L32}
  /// [google.cloud.contentwarehouse.v1.EnumTypeOptions.validation_check_disabled]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema.proto#L201}
  /// [google.cloud.contentwarehouse.v1.UpdateDocumentSchemaRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema_service.proto#L122}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::DocumentSchema>
  UpdateDocumentSchema(
      google::cloud::contentwarehouse::v1::UpdateDocumentSchemaRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets a document schema. Returns NOT_FOUND if the document schema does not
  /// exist.
  ///
  /// @param name  Required. The name of the document schema to retrieve.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.DocumentSchema])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.DocumentSchema]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema.proto#L32}
  /// [google.cloud.contentwarehouse.v1.GetDocumentSchemaRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema_service.proto#L111}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::DocumentSchema>
  GetDocumentSchema(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Gets a document schema. Returns NOT_FOUND if the document schema does not
  /// exist.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.contentwarehouse.v1.GetDocumentSchemaRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.contentwarehouse.v1.DocumentSchema])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.DocumentSchema]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema.proto#L32}
  /// [google.cloud.contentwarehouse.v1.GetDocumentSchemaRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema_service.proto#L111}
  ///
  // clang-format on
  StatusOr<google::cloud::contentwarehouse::v1::DocumentSchema>
  GetDocumentSchema(
      google::cloud::contentwarehouse::v1::GetDocumentSchemaRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes a document schema. Returns NOT_FOUND if the document schema does
  /// not exist. Returns BAD_REQUEST if the document schema has documents
  /// depending on it.
  ///
  /// @param name  Required. The name of the document schema to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.DeleteDocumentSchemaRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema_service.proto#L138}
  ///
  // clang-format on
  Status DeleteDocumentSchema(std::string const& name, Options opts = {});

  // clang-format off
  ///
  /// Deletes a document schema. Returns NOT_FOUND if the document schema does
  /// not exist. Returns BAD_REQUEST if the document schema has documents
  /// depending on it.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.contentwarehouse.v1.DeleteDocumentSchemaRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [`Status`] object. If the request failed, the
  ///     status contains the details of the failure.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.DeleteDocumentSchemaRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema_service.proto#L138}
  ///
  // clang-format on
  Status DeleteDocumentSchema(
      google::cloud::contentwarehouse::v1::DeleteDocumentSchemaRequest const&
          request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists document schemas.
  ///
  /// @param parent  Required. The parent, which owns this collection of document schemas.
  ///  Format: projects/{project_number}/locations/{location}.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.contentwarehouse.v1.DocumentSchema], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.DocumentSchema]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema.proto#L32}
  /// [google.cloud.contentwarehouse.v1.ListDocumentSchemasRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema_service.proto#L149}
  ///
  // clang-format on
  StreamRange<google::cloud::contentwarehouse::v1::DocumentSchema>
  ListDocumentSchemas(std::string const& parent, Options opts = {});

  // clang-format off
  ///
  /// Lists document schemas.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.contentwarehouse.v1.ListDocumentSchemasRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.cloud.contentwarehouse.v1.DocumentSchema], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.contentwarehouse.v1.DocumentSchema]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema.proto#L32}
  /// [google.cloud.contentwarehouse.v1.ListDocumentSchemasRequest]: @googleapis_reference_link{google/cloud/contentwarehouse/v1/document_schema_service.proto#L149}
  ///
  // clang-format on
  StreamRange<google::cloud::contentwarehouse::v1::DocumentSchema>
  ListDocumentSchemas(
      google::cloud::contentwarehouse::v1::ListDocumentSchemasRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Gets the latest state of a long-running operation.  Clients can use this
  /// method to poll the operation result at intervals as recommended by the API
  /// service.
  ///
  /// @param name  The name of the operation resource.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.longrunning.Operation])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.longrunning.GetOperationRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L160}
  /// [google.longrunning.Operation]: @googleapis_reference_link{google/longrunning/operations.proto#L121}
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> GetOperation(std::string const& name,
                                                        Options opts = {});

  // clang-format off
  ///
  /// Gets the latest state of a long-running operation.  Clients can use this
  /// method to poll the operation result at intervals as recommended by the API
  /// service.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.longrunning.GetOperationRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.longrunning.Operation])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.longrunning.GetOperationRequest]: @googleapis_reference_link{google/longrunning/operations.proto#L160}
  /// [google.longrunning.Operation]: @googleapis_reference_link{google/longrunning/operations.proto#L121}
  ///
  // clang-format on
  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<DocumentSchemaServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CONTENTWAREHOUSE_V1_DOCUMENT_SCHEMA_CLIENT_H
