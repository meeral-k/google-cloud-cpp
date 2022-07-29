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
// source: google/cloud/dialogflow/cx/v3/webhook.proto

#include "google/cloud/dialogflow_cx/internal/webhooks_connection_impl.h"
#include "google/cloud/dialogflow_cx/internal/webhooks_option_defaults.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

WebhooksConnectionImpl::WebhooksConnectionImpl(
    std::unique_ptr<google::cloud::BackgroundThreads> background,
    std::shared_ptr<dialogflow_cx_internal::WebhooksStub> stub, Options options)
    : background_(std::move(background)),
      stub_(std::move(stub)),
      options_(internal::MergeOptions(std::move(options),
                                      WebhooksConnection::options())) {}

StreamRange<google::cloud::dialogflow::cx::v3::Webhook>
WebhooksConnectionImpl::ListWebhooks(
    google::cloud::dialogflow::cx::v3::ListWebhooksRequest request) {
  request.clear_page_token();
  auto& stub = stub_;
  auto retry =
      std::shared_ptr<dialogflow_cx::WebhooksRetryPolicy const>(retry_policy());
  auto backoff = std::shared_ptr<BackoffPolicy const>(backoff_policy());
  auto idempotency = idempotency_policy()->ListWebhooks(request);
  char const* function_name = __func__;
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::dialogflow::cx::v3::Webhook>>(
      std::move(request),
      [stub, retry, backoff, idempotency, function_name](
          google::cloud::dialogflow::cx::v3::ListWebhooksRequest const& r) {
        return google::cloud::internal::RetryLoop(
            retry->clone(), backoff->clone(), idempotency,
            [stub](grpc::ClientContext& context,
                   google::cloud::dialogflow::cx::v3::ListWebhooksRequest const&
                       request) {
              return stub->ListWebhooks(context, request);
            },
            r, function_name);
      },
      [](google::cloud::dialogflow::cx::v3::ListWebhooksResponse r) {
        std::vector<google::cloud::dialogflow::cx::v3::Webhook> result(
            r.webhooks().size());
        auto& messages = *r.mutable_webhooks();
        std::move(messages.begin(), messages.end(), result.begin());
        return result;
      });
}

StatusOr<google::cloud::dialogflow::cx::v3::Webhook>
WebhooksConnectionImpl::GetWebhook(
    google::cloud::dialogflow::cx::v3::GetWebhookRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->GetWebhook(request),
      [this](
          grpc::ClientContext& context,
          google::cloud::dialogflow::cx::v3::GetWebhookRequest const& request) {
        return stub_->GetWebhook(context, request);
      },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::Webhook>
WebhooksConnectionImpl::CreateWebhook(
    google::cloud::dialogflow::cx::v3::CreateWebhookRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->CreateWebhook(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::CreateWebhookRequest const&
                 request) { return stub_->CreateWebhook(context, request); },
      request, __func__);
}

StatusOr<google::cloud::dialogflow::cx::v3::Webhook>
WebhooksConnectionImpl::UpdateWebhook(
    google::cloud::dialogflow::cx::v3::UpdateWebhookRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->UpdateWebhook(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::UpdateWebhookRequest const&
                 request) { return stub_->UpdateWebhook(context, request); },
      request, __func__);
}

Status WebhooksConnectionImpl::DeleteWebhook(
    google::cloud::dialogflow::cx::v3::DeleteWebhookRequest const& request) {
  return google::cloud::internal::RetryLoop(
      retry_policy(), backoff_policy(),
      idempotency_policy()->DeleteWebhook(request),
      [this](grpc::ClientContext& context,
             google::cloud::dialogflow::cx::v3::DeleteWebhookRequest const&
                 request) { return stub_->DeleteWebhook(context, request); },
      request, __func__);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx_internal
}  // namespace cloud
}  // namespace google
