// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_PHYSICSVEHICLEACTUATIONCOMMAND_RHMSG_H_
#define FLATBUFFERS_GENERATED_PHYSICSVEHICLEACTUATIONCOMMAND_RHMSG_H_

#include "flatbuffers/flatbuffers.h"

#include "common_generated.h"
#include "header_generated.h"
#include "teleport_request_generated.h"

namespace RHMsg {

struct PhysicsVehicleActuationCommand;

struct PhysicsVehicleActuationCommand FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_HEADER = 4,
    VT_UUID = 6,
    VT_STEERING_DEGREES = 8,
    VT_NORMALIZED_THROTTLE = 10,
    VT_NORMALIZED_BRAKE = 12,
    VT_REVERSE_GEAR_REQUEST = 14,
    VT_NORMALIZED_HANDBRAKE = 16,
    VT_LIGHTS = 18,
    VT_HORN = 20,
    VT_TELEPORT_REQUEST = 22
  };
  const HeaderData *header() const {
    return GetPointer<const HeaderData *>(VT_HEADER);
  }
  const UUID *uuid() const {
    return GetStruct<const UUID *>(VT_UUID);
  }
  float steering_degrees() const {
    return GetField<float>(VT_STEERING_DEGREES, 0.0f);
  }
  float normalized_throttle() const {
    return GetField<float>(VT_NORMALIZED_THROTTLE, 0.0f);
  }
  float normalized_brake() const {
    return GetField<float>(VT_NORMALIZED_BRAKE, 0.0f);
  }
  bool reverse_gear_request() const {
    return GetField<uint8_t>(VT_REVERSE_GEAR_REQUEST, 0) != 0;
  }
  float normalized_handbrake() const {
    return GetField<float>(VT_NORMALIZED_HANDBRAKE, 0.0f);
  }
  const VehicleLights *lights() const {
    return GetStruct<const VehicleLights *>(VT_LIGHTS);
  }
  bool horn() const {
    return GetField<uint8_t>(VT_HORN, 0) != 0;
  }
  const TeleportRequest *teleport_request() const {
    return GetStruct<const TeleportRequest *>(VT_TELEPORT_REQUEST);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_HEADER) &&
           verifier.VerifyTable(header()) &&
           VerifyField<UUID>(verifier, VT_UUID) &&
           VerifyField<float>(verifier, VT_STEERING_DEGREES) &&
           VerifyField<float>(verifier, VT_NORMALIZED_THROTTLE) &&
           VerifyField<float>(verifier, VT_NORMALIZED_BRAKE) &&
           VerifyField<uint8_t>(verifier, VT_REVERSE_GEAR_REQUEST) &&
           VerifyField<float>(verifier, VT_NORMALIZED_HANDBRAKE) &&
           VerifyField<VehicleLights>(verifier, VT_LIGHTS) &&
           VerifyField<uint8_t>(verifier, VT_HORN) &&
           VerifyField<TeleportRequest>(verifier, VT_TELEPORT_REQUEST) &&
           verifier.EndTable();
  }
};

struct PhysicsVehicleActuationCommandBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_header(flatbuffers::Offset<HeaderData> header) {
    fbb_.AddOffset(PhysicsVehicleActuationCommand::VT_HEADER, header);
  }
  void add_uuid(const UUID *uuid) {
    fbb_.AddStruct(PhysicsVehicleActuationCommand::VT_UUID, uuid);
  }
  void add_steering_degrees(float steering_degrees) {
    fbb_.AddElement<float>(PhysicsVehicleActuationCommand::VT_STEERING_DEGREES, steering_degrees, 0.0f);
  }
  void add_normalized_throttle(float normalized_throttle) {
    fbb_.AddElement<float>(PhysicsVehicleActuationCommand::VT_NORMALIZED_THROTTLE, normalized_throttle, 0.0f);
  }
  void add_normalized_brake(float normalized_brake) {
    fbb_.AddElement<float>(PhysicsVehicleActuationCommand::VT_NORMALIZED_BRAKE, normalized_brake, 0.0f);
  }
  void add_reverse_gear_request(bool reverse_gear_request) {
    fbb_.AddElement<uint8_t>(PhysicsVehicleActuationCommand::VT_REVERSE_GEAR_REQUEST, static_cast<uint8_t>(reverse_gear_request), 0);
  }
  void add_normalized_handbrake(float normalized_handbrake) {
    fbb_.AddElement<float>(PhysicsVehicleActuationCommand::VT_NORMALIZED_HANDBRAKE, normalized_handbrake, 0.0f);
  }
  void add_lights(const VehicleLights *lights) {
    fbb_.AddStruct(PhysicsVehicleActuationCommand::VT_LIGHTS, lights);
  }
  void add_horn(bool horn) {
    fbb_.AddElement<uint8_t>(PhysicsVehicleActuationCommand::VT_HORN, static_cast<uint8_t>(horn), 0);
  }
  void add_teleport_request(const TeleportRequest *teleport_request) {
    fbb_.AddStruct(PhysicsVehicleActuationCommand::VT_TELEPORT_REQUEST, teleport_request);
  }
  PhysicsVehicleActuationCommandBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  PhysicsVehicleActuationCommandBuilder &operator=(const PhysicsVehicleActuationCommandBuilder &);
  flatbuffers::Offset<PhysicsVehicleActuationCommand> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PhysicsVehicleActuationCommand>(end);
    return o;
  }
};

inline flatbuffers::Offset<PhysicsVehicleActuationCommand> CreatePhysicsVehicleActuationCommand(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<HeaderData> header = 0,
    const UUID *uuid = 0,
    float steering_degrees = 0.0f,
    float normalized_throttle = 0.0f,
    float normalized_brake = 0.0f,
    bool reverse_gear_request = false,
    float normalized_handbrake = 0.0f,
    const VehicleLights *lights = 0,
    bool horn = false,
    const TeleportRequest *teleport_request = 0) {
  PhysicsVehicleActuationCommandBuilder builder_(_fbb);
  builder_.add_teleport_request(teleport_request);
  builder_.add_lights(lights);
  builder_.add_normalized_handbrake(normalized_handbrake);
  builder_.add_normalized_brake(normalized_brake);
  builder_.add_normalized_throttle(normalized_throttle);
  builder_.add_steering_degrees(steering_degrees);
  builder_.add_uuid(uuid);
  builder_.add_header(header);
  builder_.add_horn(horn);
  builder_.add_reverse_gear_request(reverse_gear_request);
  return builder_.Finish();
}

inline const RHMsg::PhysicsVehicleActuationCommand *GetPhysicsVehicleActuationCommand(const void *buf) {
  return flatbuffers::GetRoot<RHMsg::PhysicsVehicleActuationCommand>(buf);
}

inline bool VerifyPhysicsVehicleActuationCommandBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<RHMsg::PhysicsVehicleActuationCommand>(nullptr);
}

inline void FinishPhysicsVehicleActuationCommandBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<RHMsg::PhysicsVehicleActuationCommand> root) {
  fbb.Finish(root);
}

}  // namespace RHMsg

#endif  // FLATBUFFERS_GENERATED_PHYSICSVEHICLEACTUATIONCOMMAND_RHMSG_H_
