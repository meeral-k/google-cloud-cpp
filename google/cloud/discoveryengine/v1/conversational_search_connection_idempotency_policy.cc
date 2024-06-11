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
// source: google/cloud/discoveryengine/v1/conversational_search_service.proto

#include "google/cloud/discoveryengine/v1/conversational_search_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace discoveryengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ConversationalSearchServiceConnectionIdempotencyPolicy::
    ~ConversationalSearchServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<ConversationalSearchServiceConnectionIdempotencyPolicy>
ConversationalSearchServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<
      ConversationalSearchServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency
ConversationalSearchServiceConnectionIdempotencyPolicy::ConverseConversation(
    google::cloud::discoveryengine::v1::ConverseConversationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ConversationalSearchServiceConnectionIdempotencyPolicy::CreateConversation(
    google::cloud::discoveryengine::v1::CreateConversationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ConversationalSearchServiceConnectionIdempotencyPolicy::DeleteConversation(
    google::cloud::discoveryengine::v1::DeleteConversationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ConversationalSearchServiceConnectionIdempotencyPolicy::UpdateConversation(
    google::cloud::discoveryengine::v1::UpdateConversationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ConversationalSearchServiceConnectionIdempotencyPolicy::GetConversation(
    google::cloud::discoveryengine::v1::GetConversationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
ConversationalSearchServiceConnectionIdempotencyPolicy::ListConversations(
    google::cloud::discoveryengine::v1::ListConversationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ConversationalSearchServiceConnectionIdempotencyPolicy::AnswerQuery(
    google::cloud::discoveryengine::v1::AnswerQueryRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConversationalSearchServiceConnectionIdempotencyPolicy::GetAnswer(
    google::cloud::discoveryengine::v1::GetAnswerRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
ConversationalSearchServiceConnectionIdempotencyPolicy::CreateSession(
    google::cloud::discoveryengine::v1::CreateSessionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ConversationalSearchServiceConnectionIdempotencyPolicy::DeleteSession(
    google::cloud::discoveryengine::v1::DeleteSessionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ConversationalSearchServiceConnectionIdempotencyPolicy::UpdateSession(
    google::cloud::discoveryengine::v1::UpdateSessionRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ConversationalSearchServiceConnectionIdempotencyPolicy::GetSession(
    google::cloud::discoveryengine::v1::GetSessionRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
ConversationalSearchServiceConnectionIdempotencyPolicy::ListSessions(
    google::cloud::discoveryengine::v1::ListSessionsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

std::unique_ptr<ConversationalSearchServiceConnectionIdempotencyPolicy>
MakeDefaultConversationalSearchServiceConnectionIdempotencyPolicy() {
  return std::make_unique<
      ConversationalSearchServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1
}  // namespace cloud
}  // namespace google
