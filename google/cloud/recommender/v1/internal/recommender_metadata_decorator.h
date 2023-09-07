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
// source: google/cloud/recommender/v1/recommender_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECOMMENDER_V1_INTERNAL_RECOMMENDER_METADATA_DECORATOR_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECOMMENDER_V1_INTERNAL_RECOMMENDER_METADATA_DECORATOR_H

#include "google/cloud/recommender/v1/internal/recommender_stub.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace recommender_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RecommenderMetadata : public RecommenderStub {
 public:
  ~RecommenderMetadata() override = default;
  RecommenderMetadata(std::shared_ptr<RecommenderStub> child,
                      std::multimap<std::string, std::string> fixed_metadata,
                      std::string api_client_header = "");

  StatusOr<google::cloud::recommender::v1::ListInsightsResponse> ListInsights(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::ListInsightsRequest const& request)
      override;

  StatusOr<google::cloud::recommender::v1::Insight> GetInsight(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::GetInsightRequest const& request)
      override;

  StatusOr<google::cloud::recommender::v1::Insight> MarkInsightAccepted(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::MarkInsightAcceptedRequest const& request)
      override;

  StatusOr<google::cloud::recommender::v1::ListRecommendationsResponse>
  ListRecommendations(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::ListRecommendationsRequest const& request)
      override;

  StatusOr<google::cloud::recommender::v1::Recommendation> GetRecommendation(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::GetRecommendationRequest const& request)
      override;

  StatusOr<google::cloud::recommender::v1::Recommendation>
  MarkRecommendationDismissed(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::MarkRecommendationDismissedRequest const&
          request) override;

  StatusOr<google::cloud::recommender::v1::Recommendation>
  MarkRecommendationClaimed(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::MarkRecommendationClaimedRequest const&
          request) override;

  StatusOr<google::cloud::recommender::v1::Recommendation>
  MarkRecommendationSucceeded(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::MarkRecommendationSucceededRequest const&
          request) override;

  StatusOr<google::cloud::recommender::v1::Recommendation>
  MarkRecommendationFailed(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::MarkRecommendationFailedRequest const&
          request) override;

  StatusOr<google::cloud::recommender::v1::RecommenderConfig>
  GetRecommenderConfig(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::GetRecommenderConfigRequest const&
          request) override;

  StatusOr<google::cloud::recommender::v1::RecommenderConfig>
  UpdateRecommenderConfig(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::UpdateRecommenderConfigRequest const&
          request) override;

  StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
  GetInsightTypeConfig(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::GetInsightTypeConfigRequest const&
          request) override;

  StatusOr<google::cloud::recommender::v1::InsightTypeConfig>
  UpdateInsightTypeConfig(
      grpc::ClientContext& context,
      google::cloud::recommender::v1::UpdateInsightTypeConfigRequest const&
          request) override;

 private:
  void SetMetadata(grpc::ClientContext& context,
                   std::string const& request_params);
  void SetMetadata(grpc::ClientContext& context);

  std::shared_ptr<RecommenderStub> child_;
  std::multimap<std::string, std::string> fixed_metadata_;
  std::string api_client_header_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recommender_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RECOMMENDER_V1_INTERNAL_RECOMMENDER_METADATA_DECORATOR_H
