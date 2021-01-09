// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_TELEPORTREQUEST_RHMSG_H_
#define FLATBUFFERS_GENERATED_TELEPORTREQUEST_RHMSG_H_

#include "flatbuffers/flatbuffers.h"

#include "common_generated.h"

namespace RHMsg {

struct TeleportRequest;

MANUALLY_ALIGNED_STRUCT(4) TeleportRequest FLATBUFFERS_FINAL_CLASS {
 private:
  Vec3 location_;
  Quat4 orientation_;
  Vec3 velocity_;
  Vec3 angular_velocity_;

 public:
  TeleportRequest() {
    memset(this, 0, sizeof(TeleportRequest));
  }
  TeleportRequest(const TeleportRequest &_o) {
    memcpy(this, &_o, sizeof(TeleportRequest));
  }
  TeleportRequest(const Vec3 &_location, const Quat4 &_orientation, const Vec3 &_velocity, const Vec3 &_angular_velocity)
      : location_(_location),
        orientation_(_orientation),
        velocity_(_velocity),
        angular_velocity_(_angular_velocity) {
  }
  const Vec3 &location() const {
    return location_;
  }
  const Quat4 &orientation() const {
    return orientation_;
  }
  const Vec3 &velocity() const {
    return velocity_;
  }
  const Vec3 &angular_velocity() const {
    return angular_velocity_;
  }
};
STRUCT_END(TeleportRequest, 52);

}  // namespace RHMsg

#endif  // FLATBUFFERS_GENERATED_TELEPORTREQUEST_RHMSG_H_
