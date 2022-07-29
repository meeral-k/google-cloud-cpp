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
// source: google/cloud/language/v1/language_service.proto

#include "google/cloud/language/internal/language_connection_impl.h"
#include "google/cloud/language/internal/language_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace language_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LanguageServiceConnectionImpl::LanguageServiceConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<language_internal::LanguageServiceStub> stub,
    Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      LanguageServiceConnection::options())) {}

StatusOr<google::cloud::language::v1::AnalyzeSentimentResponse>
LanguageServiceConnectionImpl::AnalyzeSentiment(
    google::cloud::language::v1::AnalyzeSentimentRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->AnalyzeSentiment(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::language::v1::AnalyzeSentimentRequest const& request) {
        return stub_->AnalyzeSentiment(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::language::v1::AnalyzeEntitiesResponse>
LanguageServiceConnectionImpl::AnalyzeEntities(
    google::cloud::language::v1::AnalyzeEntitiesRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->AnalyzeEntities(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::language::v1::AnalyzeEntitiesRequest const& request) {
        return stub_->AnalyzeEntities(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::language::v1::AnalyzeEntitySentimentResponse>
LanguageServiceConnectionImpl::AnalyzeEntitySentiment(
    google::cloud::language::v1::AnalyzeEntitySentimentRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->AnalyzeEntitySentiment(request),
      [this](grpc::ClientContext& context,
             google::cloud::language::v1::AnalyzeEntitySentimentRequest const&
                 request) {
        return stub_->AnalyzeEntitySentiment(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::language::v1::AnalyzeSyntaxResponse>
LanguageServiceConnectionImpl::AnalyzeSyntax(
    google::cloud::language::v1::AnalyzeSyntaxRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->AnalyzeSyntax(request),
      [this](grpc::ClientContext& context,
             google::cloud::language::v1::AnalyzeSyntaxRequest const& request) {
        return stub_->AnalyzeSyntax(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::language::v1::ClassifyTextResponse>
LanguageServiceConnectionImpl::ClassifyText(
    google::cloud::language::v1::ClassifyTextRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->ClassifyText(request),
      [this](grpc::ClientContext& context,
             google::cloud::language::v1::ClassifyTextRequest const& request) {
        return stub_->ClassifyText(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::language::v1::AnnotateTextResponse>
LanguageServiceConnectionImpl::AnnotateText(
    google::cloud::language::v1::AnnotateTextRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->AnnotateText(request),
      [this](grpc::ClientContext& context,
             google::cloud::language::v1::AnnotateTextRequest const& request) {
        return stub_->AnnotateText(context, request);
      },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace language_internal
}  // namespace cloud
}  // namespace google
