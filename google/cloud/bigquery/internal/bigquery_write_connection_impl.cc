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
// source: google/cloud/bigquery/storage/v1/storage.proto

#include "google/cloud/bigquery/internal/bigquery_write_connection_impl.h"
#include "google/cloud/bigquery/internal/bigquery_write_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

BigQueryWriteConnectionImpl::BigQueryWriteConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<bigquery_internal::BigQueryWriteStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      BigQueryWriteConnection::options())) {}

StatusOr<google::cloud::bigquery::storage::v1::WriteStream>
BigQueryWriteConnectionImpl::CreateWriteStream(
    google::cloud::bigquery::storage::v1::CreateWriteStreamRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateWriteStream(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::bigquery::storage::v1::CreateWriteStreamRequest const&
              request) { return stub_->CreateWriteStream(context, request); },
      request, __func__);
}

StatusOr<google::cloud::bigquery::storage::v1::WriteStream>
BigQueryWriteConnectionImpl::GetWriteStream(
    google::cloud::bigquery::storage::v1::GetWriteStreamRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetWriteStream(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::storage::v1::GetWriteStreamRequest const&
                 request) { return stub_->GetWriteStream(context, request); },
      request, __func__);
}

StatusOr<google::cloud::bigquery::storage::v1::FinalizeWriteStreamResponse>
BigQueryWriteConnectionImpl::FinalizeWriteStream(
    google::cloud::bigquery::storage::v1::FinalizeWriteStreamRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->FinalizeWriteStream(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::storage::v1::
                 FinalizeWriteStreamRequest const& request) {
        return stub_->FinalizeWriteStream(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::bigquery::storage::v1::BatchCommitWriteStreamsResponse>
BigQueryWriteConnectionImpl::BatchCommitWriteStreams(
    google::cloud::bigquery::storage::v1::BatchCommitWriteStreamsRequest const&
        request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->BatchCommitWriteStreams(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::storage::v1::
                 BatchCommitWriteStreamsRequest const& request) {
        return stub_->BatchCommitWriteStreams(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::bigquery::storage::v1::FlushRowsResponse>
BigQueryWriteConnectionImpl::FlushRows(
    google::cloud::bigquery::storage::v1::FlushRowsRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->FlushRows(request),
      [this](grpc::ClientContext& context,
             google::cloud::bigquery::storage::v1::FlushRowsRequest const&
                 request) { return stub_->FlushRows(context, request); },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google
