// Copyright 2024 Google LLC
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
// source: google/cloud/discoveryengine/v1/recommendation_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_RECOMMENDATION_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_RECOMMENDATION_CLIENT_H

#include "google/cloud/discoveryengine/v1/recommendation_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>
#include <string>

namespace google {
namespace cloud {
namespace discoveryengine_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for making recommendations.
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
class RecommendationServiceClient {
 public:
  explicit RecommendationServiceClient(
      std::shared_ptr<RecommendationServiceConnection> connection,
      Options opts = {});
  ~RecommendationServiceClient();

  ///@{
  /// @name Copy and move support
  RecommendationServiceClient(RecommendationServiceClient const&) = default;
  RecommendationServiceClient& operator=(RecommendationServiceClient const&) =
      default;
  RecommendationServiceClient(RecommendationServiceClient&&) = default;
  RecommendationServiceClient& operator=(RecommendationServiceClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(RecommendationServiceClient const& a,
                         RecommendationServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(RecommendationServiceClient const& a,
                         RecommendationServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Makes a recommendation, which requires a contextual user event.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.discoveryengine.v1.RecommendRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.discoveryengine.v1.RecommendResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.discoveryengine.v1.RecommendRequest]: @googleapis_reference_link{google/cloud/discoveryengine/v1/recommendation_service.proto#L60}
  /// [google.cloud.discoveryengine.v1.RecommendResponse]: @googleapis_reference_link{google/cloud/discoveryengine/v1/recommendation_service.proto#L190}
  ///
  // clang-format on
  StatusOr<google::cloud::discoveryengine::v1::RecommendResponse> Recommend(
      google::cloud::discoveryengine::v1::RecommendRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<RecommendationServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace discoveryengine_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DISCOVERYENGINE_V1_RECOMMENDATION_CLIENT_H
