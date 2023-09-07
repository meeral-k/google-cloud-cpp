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
// source: google/cloud/contentwarehouse/v1/document_service.proto

#include "google/cloud/contentwarehouse/v1/internal/document_metadata_decorator.h"
#include "google/cloud/common_options.h"
#include "google/cloud/internal/absl_str_cat_quiet.h"
#include "google/cloud/internal/api_client_header.h"
#include "google/cloud/internal/url_encode.h"
#include "google/cloud/status_or.h"
#include <google/cloud/contentwarehouse/v1/document_service.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace contentwarehouse_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

DocumentServiceMetadata::DocumentServiceMetadata(
    std::shared_ptr<DocumentServiceStub> child,
    std::multimap<std::string, std::string> fixed_metadata,
    std::string api_client_header)
    : child_(std::move(child)),
      fixed_metadata_(std::move(fixed_metadata)),
      api_client_header_(
          api_client_header.empty()
              ? google::cloud::internal::ApiClientHeader("generator")
              : std::move(api_client_header)) {}

StatusOr<google::cloud::contentwarehouse::v1::CreateDocumentResponse>
DocumentServiceMetadata::CreateDocument(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::CreateDocumentRequest const& request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->CreateDocument(context, request);
}

StatusOr<google::cloud::contentwarehouse::v1::Document>
DocumentServiceMetadata::GetDocument(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::GetDocumentRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->GetDocument(context, request);
}

StatusOr<google::cloud::contentwarehouse::v1::UpdateDocumentResponse>
DocumentServiceMetadata::UpdateDocument(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::UpdateDocumentRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->UpdateDocument(context, request);
}

Status DocumentServiceMetadata::DeleteDocument(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::DeleteDocumentRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->DeleteDocument(context, request);
}

StatusOr<google::cloud::contentwarehouse::v1::SearchDocumentsResponse>
DocumentServiceMetadata::SearchDocuments(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::SearchDocumentsRequest const&
        request) {
  SetMetadata(context,
              absl::StrCat("parent=", internal::UrlEncode(request.parent())));
  return child_->SearchDocuments(context, request);
}

StatusOr<google::cloud::contentwarehouse::v1::Document>
DocumentServiceMetadata::LockDocument(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::LockDocumentRequest const& request) {
  SetMetadata(context,
              absl::StrCat("name=", internal::UrlEncode(request.name())));
  return child_->LockDocument(context, request);
}

StatusOr<google::cloud::contentwarehouse::v1::FetchAclResponse>
DocumentServiceMetadata::FetchAcl(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::FetchAclRequest const& request) {
  SetMetadata(context, absl::StrCat("resource=",
                                    internal::UrlEncode(request.resource())));
  return child_->FetchAcl(context, request);
}

StatusOr<google::cloud::contentwarehouse::v1::SetAclResponse>
DocumentServiceMetadata::SetAcl(
    grpc::ClientContext& context,
    google::cloud::contentwarehouse::v1::SetAclRequest const& request) {
  SetMetadata(context, absl::StrCat("resource=",
                                    internal::UrlEncode(request.resource())));
  return child_->SetAcl(context, request);
}

void DocumentServiceMetadata::SetMetadata(grpc::ClientContext& context,
                                          std::string const& request_params) {
  context.AddMetadata("x-goog-request-params", request_params);
  SetMetadata(context);
}

void DocumentServiceMetadata::SetMetadata(grpc::ClientContext& context) {
  for (auto const& kv : fixed_metadata_) {
    context.AddMetadata(kv.first, kv.second);
  }
  context.AddMetadata("x-goog-api-client", api_client_header_);
  auto const& options = internal::CurrentOptions();
  if (options.has<UserProjectOption>()) {
    context.AddMetadata("x-goog-user-project",
                        options.get<UserProjectOption>());
  }
  auto const& authority = options.get<AuthorityOption>();
  if (!authority.empty()) context.set_authority(authority);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace contentwarehouse_v1_internal
}  // namespace cloud
}  // namespace google
