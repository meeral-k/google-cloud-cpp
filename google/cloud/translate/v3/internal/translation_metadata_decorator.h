// Copyright 2022 Google LLC
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
// source: google/cloud/translate/v3/translation_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_INTERNAL_TRANSLATION_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_INTERNAL_TRANSLATION_METADATA_DECORATOR_H

#include "google/cloud/translate/v3/internal/translation_stub.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace translate_v3_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TranslationServiceMetadata : public TranslationServiceStub {
 public:
  ~TranslationServiceMetadata() override = default;
  TranslationServiceMetadata(
      std::shared_ptr<TranslationServiceStub> child,
      std::multimap<std::string, std::string> fixed_metadata,
      std::string api_client_header = "");

  StatusOr<google::cloud::translation::v3::TranslateTextResponse> TranslateText(
      grpc::ClientContext& context,
      google::cloud::translation::v3::TranslateTextRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
  DetectLanguage(grpc::ClientContext& context,
                 google::cloud::translation::v3::DetectLanguageRequest const&
                     request) override;

  StatusOr<google::cloud::translation::v3::SupportedLanguages>
  GetSupportedLanguages(
      grpc::ClientContext& context,
      google::cloud::translation::v3::GetSupportedLanguagesRequest const&
          request) override;

  StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
  TranslateDocument(
      grpc::ClientContext& context,
      google::cloud::translation::v3::TranslateDocumentRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchTranslateText(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::translation::v3::BatchTranslateTextRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncBatchTranslateDocument(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::translation::v3::BatchTranslateDocumentRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncCreateGlossary(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::translation::v3::CreateGlossaryRequest const& request)
      override;

  StatusOr<google::cloud::translation::v3::ListGlossariesResponse>
  ListGlossaries(grpc::ClientContext& context,
                 google::cloud::translation::v3::ListGlossariesRequest const&
                     request) override;

  StatusOr<google::cloud::translation::v3::Glossary> GetGlossary(
      grpc::ClientContext& context,
      google::cloud::translation::v3::GetGlossaryRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteGlossary(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::translation::v3::DeleteGlossaryRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  void SetMetadata(grpc::ClientContext& context, Options const& options,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context, Options const& options);

  std::shared_ptr<TranslationServiceStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate_v3_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_TRANSLATE_V3_INTERNAL_TRANSLATION_METADATA_DECORATOR_H
