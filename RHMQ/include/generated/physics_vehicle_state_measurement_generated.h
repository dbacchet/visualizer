// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_PHYSICSVEHICLESTATEMEASUREMENT_RHMSG_H_
#define FLATBUFFERS_GENERATED_PHYSICSVEHICLESTATEMEASUREMENT_RHMSG_H_

#include "flatbuffers/flatbuffers.h"

#include "common_generated.h"
#include "header_generated.h"

namespace RHMsg {

struct PhysicsVehicleWheelsData;

struct PhysicsVehicleStateMeasurement;

struct PhysicsVehicleWheelsData FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_INDEX = 4,
    VT_LONG_SLIP = 6,
    VT_LAT_SLIP = 8,
    VT_NORMALIZED_TIRE_LOAD = 10,
    VT_TORQUE = 12,
    VT_LONG_FORCE = 14,
    VT_LAT_FORCE = 16,
    VT_WHEEL_LOCATION = 18,
    VT_WHEEL_VELOCITY = 20,
    VT_STEER_ANGLE = 22,
    VT_ROTATION_ANGLE = 24,
    VT_CONTACT_MATERIAL_NAME = 26
  };
  WheelIndex index() const {
    return static_cast<WheelIndex>(GetField<int8_t>(VT_INDEX, 0));
  }
  float long_slip() const {
    return GetField<float>(VT_LONG_SLIP, 0.0f);
  }
  float lat_slip() const {
    return GetField<float>(VT_LAT_SLIP, 0.0f);
  }
  float normalized_tire_load() const {
    return GetField<float>(VT_NORMALIZED_TIRE_LOAD, 0.0f);
  }
  float torque() const {
    return GetField<float>(VT_TORQUE, 0.0f);
  }
  float long_force() const {
    return GetField<float>(VT_LONG_FORCE, 0.0f);
  }
  float lat_force() const {
    return GetField<float>(VT_LAT_FORCE, 0.0f);
  }
  const Vec3 *wheel_location() const {
    return GetStruct<const Vec3 *>(VT_WHEEL_LOCATION);
  }
  const Vec3 *wheel_velocity() const {
    return GetStruct<const Vec3 *>(VT_WHEEL_VELOCITY);
  }
  float steer_angle() const {
    return GetField<float>(VT_STEER_ANGLE, 0.0f);
  }
  float rotation_angle() const {
    return GetField<float>(VT_ROTATION_ANGLE, 0.0f);
  }
  WheelContactMaterial contact_material_name() const {
    return static_cast<WheelContactMaterial>(GetField<int8_t>(VT_CONTACT_MATERIAL_NAME, 0));
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, VT_INDEX) &&
           VerifyField<float>(verifier, VT_LONG_SLIP) &&
           VerifyField<float>(verifier, VT_LAT_SLIP) &&
           VerifyField<float>(verifier, VT_NORMALIZED_TIRE_LOAD) &&
           VerifyField<float>(verifier, VT_TORQUE) &&
           VerifyField<float>(verifier, VT_LONG_FORCE) &&
           VerifyField<float>(verifier, VT_LAT_FORCE) &&
           VerifyField<Vec3>(verifier, VT_WHEEL_LOCATION) &&
           VerifyField<Vec3>(verifier, VT_WHEEL_VELOCITY) &&
           VerifyField<float>(verifier, VT_STEER_ANGLE) &&
           VerifyField<float>(verifier, VT_ROTATION_ANGLE) &&
           VerifyField<int8_t>(verifier, VT_CONTACT_MATERIAL_NAME) &&
           verifier.EndTable();
  }
};

struct PhysicsVehicleWheelsDataBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_index(WheelIndex index) {
    fbb_.AddElement<int8_t>(PhysicsVehicleWheelsData::VT_INDEX, static_cast<int8_t>(index), 0);
  }
  void add_long_slip(float long_slip) {
    fbb_.AddElement<float>(PhysicsVehicleWheelsData::VT_LONG_SLIP, long_slip, 0.0f);
  }
  void add_lat_slip(float lat_slip) {
    fbb_.AddElement<float>(PhysicsVehicleWheelsData::VT_LAT_SLIP, lat_slip, 0.0f);
  }
  void add_normalized_tire_load(float normalized_tire_load) {
    fbb_.AddElement<float>(PhysicsVehicleWheelsData::VT_NORMALIZED_TIRE_LOAD, normalized_tire_load, 0.0f);
  }
  void add_torque(float torque) {
    fbb_.AddElement<float>(PhysicsVehicleWheelsData::VT_TORQUE, torque, 0.0f);
  }
  void add_long_force(float long_force) {
    fbb_.AddElement<float>(PhysicsVehicleWheelsData::VT_LONG_FORCE, long_force, 0.0f);
  }
  void add_lat_force(float lat_force) {
    fbb_.AddElement<float>(PhysicsVehicleWheelsData::VT_LAT_FORCE, lat_force, 0.0f);
  }
  void add_wheel_location(const Vec3 *wheel_location) {
    fbb_.AddStruct(PhysicsVehicleWheelsData::VT_WHEEL_LOCATION, wheel_location);
  }
  void add_wheel_velocity(const Vec3 *wheel_velocity) {
    fbb_.AddStruct(PhysicsVehicleWheelsData::VT_WHEEL_VELOCITY, wheel_velocity);
  }
  void add_steer_angle(float steer_angle) {
    fbb_.AddElement<float>(PhysicsVehicleWheelsData::VT_STEER_ANGLE, steer_angle, 0.0f);
  }
  void add_rotation_angle(float rotation_angle) {
    fbb_.AddElement<float>(PhysicsVehicleWheelsData::VT_ROTATION_ANGLE, rotation_angle, 0.0f);
  }
  void add_contact_material_name(WheelContactMaterial contact_material_name) {
    fbb_.AddElement<int8_t>(PhysicsVehicleWheelsData::VT_CONTACT_MATERIAL_NAME, static_cast<int8_t>(contact_material_name), 0);
  }
  PhysicsVehicleWheelsDataBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  PhysicsVehicleWheelsDataBuilder &operator=(const PhysicsVehicleWheelsDataBuilder &);
  flatbuffers::Offset<PhysicsVehicleWheelsData> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PhysicsVehicleWheelsData>(end);
    return o;
  }
};

inline flatbuffers::Offset<PhysicsVehicleWheelsData> CreatePhysicsVehicleWheelsData(
    flatbuffers::FlatBufferBuilder &_fbb,
    WheelIndex index = WheelIndex_FRONTLEFT,
    float long_slip = 0.0f,
    float lat_slip = 0.0f,
    float normalized_tire_load = 0.0f,
    float torque = 0.0f,
    float long_force = 0.0f,
    float lat_force = 0.0f,
    const Vec3 *wheel_location = 0,
    const Vec3 *wheel_velocity = 0,
    float steer_angle = 0.0f,
    float rotation_angle = 0.0f,
    WheelContactMaterial contact_material_name = WheelContactMaterial_UNKNOWN) {
  PhysicsVehicleWheelsDataBuilder builder_(_fbb);
  builder_.add_rotation_angle(rotation_angle);
  builder_.add_steer_angle(steer_angle);
  builder_.add_wheel_velocity(wheel_velocity);
  builder_.add_wheel_location(wheel_location);
  builder_.add_lat_force(lat_force);
  builder_.add_long_force(long_force);
  builder_.add_torque(torque);
  builder_.add_normalized_tire_load(normalized_tire_load);
  builder_.add_lat_slip(lat_slip);
  builder_.add_long_slip(long_slip);
  builder_.add_contact_material_name(contact_material_name);
  builder_.add_index(index);
  return builder_.Finish();
}

struct PhysicsVehicleStateMeasurement FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_HEADER = 4,
    VT_UUID = 6,
    VT_LOCATION = 8,
    VT_ORIENTATION = 10,
    VT_VELOCITY = 12,
    VT_ANGULAR_VELOCITY = 14,
    VT_ACCELERATION = 16,
    VT_GEAR = 18,
    VT_ENGINE_SPEED = 20,
    VT_WHEELS = 22,
    VT_LOCATION_WGS84 = 24
  };
  const HeaderData *header() const {
    return GetPointer<const HeaderData *>(VT_HEADER);
  }
  const UUID *uuid() const {
    return GetStruct<const UUID *>(VT_UUID);
  }
  const Vec3 *location() const {
    return GetStruct<const Vec3 *>(VT_LOCATION);
  }
  const Quat4 *orientation() const {
    return GetStruct<const Quat4 *>(VT_ORIENTATION);
  }
  const Vec3 *velocity() const {
    return GetStruct<const Vec3 *>(VT_VELOCITY);
  }
  const Vec3 *angular_velocity() const {
    return GetStruct<const Vec3 *>(VT_ANGULAR_VELOCITY);
  }
  const Vec3 *acceleration() const {
    return GetStruct<const Vec3 *>(VT_ACCELERATION);
  }
  int32_t gear() const {
    return GetField<int32_t>(VT_GEAR, 0);
  }
  float engine_speed() const {
    return GetField<float>(VT_ENGINE_SPEED, 0.0f);
  }
  const flatbuffers::Vector<flatbuffers::Offset<PhysicsVehicleWheelsData>> *wheels() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<PhysicsVehicleWheelsData>> *>(VT_WHEELS);
  }
  const Vec3 *location_wgs84() const {
    return GetStruct<const Vec3 *>(VT_LOCATION_WGS84);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_HEADER) &&
           verifier.VerifyTable(header()) &&
           VerifyField<UUID>(verifier, VT_UUID) &&
           VerifyField<Vec3>(verifier, VT_LOCATION) &&
           VerifyField<Quat4>(verifier, VT_ORIENTATION) &&
           VerifyField<Vec3>(verifier, VT_VELOCITY) &&
           VerifyField<Vec3>(verifier, VT_ANGULAR_VELOCITY) &&
           VerifyField<Vec3>(verifier, VT_ACCELERATION) &&
           VerifyField<int32_t>(verifier, VT_GEAR) &&
           VerifyField<float>(verifier, VT_ENGINE_SPEED) &&
           VerifyOffset(verifier, VT_WHEELS) &&
           verifier.Verify(wheels()) &&
           verifier.VerifyVectorOfTables(wheels()) &&
           VerifyField<Vec3>(verifier, VT_LOCATION_WGS84) &&
           verifier.EndTable();
  }
};

struct PhysicsVehicleStateMeasurementBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_header(flatbuffers::Offset<HeaderData> header) {
    fbb_.AddOffset(PhysicsVehicleStateMeasurement::VT_HEADER, header);
  }
  void add_uuid(const UUID *uuid) {
    fbb_.AddStruct(PhysicsVehicleStateMeasurement::VT_UUID, uuid);
  }
  void add_location(const Vec3 *location) {
    fbb_.AddStruct(PhysicsVehicleStateMeasurement::VT_LOCATION, location);
  }
  void add_orientation(const Quat4 *orientation) {
    fbb_.AddStruct(PhysicsVehicleStateMeasurement::VT_ORIENTATION, orientation);
  }
  void add_velocity(const Vec3 *velocity) {
    fbb_.AddStruct(PhysicsVehicleStateMeasurement::VT_VELOCITY, velocity);
  }
  void add_angular_velocity(const Vec3 *angular_velocity) {
    fbb_.AddStruct(PhysicsVehicleStateMeasurement::VT_ANGULAR_VELOCITY, angular_velocity);
  }
  void add_acceleration(const Vec3 *acceleration) {
    fbb_.AddStruct(PhysicsVehicleStateMeasurement::VT_ACCELERATION, acceleration);
  }
  void add_gear(int32_t gear) {
    fbb_.AddElement<int32_t>(PhysicsVehicleStateMeasurement::VT_GEAR, gear, 0);
  }
  void add_engine_speed(float engine_speed) {
    fbb_.AddElement<float>(PhysicsVehicleStateMeasurement::VT_ENGINE_SPEED, engine_speed, 0.0f);
  }
  void add_wheels(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<PhysicsVehicleWheelsData>>> wheels) {
    fbb_.AddOffset(PhysicsVehicleStateMeasurement::VT_WHEELS, wheels);
  }
  void add_location_wgs84(const Vec3 *location_wgs84) {
    fbb_.AddStruct(PhysicsVehicleStateMeasurement::VT_LOCATION_WGS84, location_wgs84);
  }
  PhysicsVehicleStateMeasurementBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  PhysicsVehicleStateMeasurementBuilder &operator=(const PhysicsVehicleStateMeasurementBuilder &);
  flatbuffers::Offset<PhysicsVehicleStateMeasurement> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PhysicsVehicleStateMeasurement>(end);
    return o;
  }
};

inline flatbuffers::Offset<PhysicsVehicleStateMeasurement> CreatePhysicsVehicleStateMeasurement(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<HeaderData> header = 0,
    const UUID *uuid = 0,
    const Vec3 *location = 0,
    const Quat4 *orientation = 0,
    const Vec3 *velocity = 0,
    const Vec3 *angular_velocity = 0,
    const Vec3 *acceleration = 0,
    int32_t gear = 0,
    float engine_speed = 0.0f,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<PhysicsVehicleWheelsData>>> wheels = 0,
    const Vec3 *location_wgs84 = 0) {
  PhysicsVehicleStateMeasurementBuilder builder_(_fbb);
  builder_.add_location_wgs84(location_wgs84);
  builder_.add_wheels(wheels);
  builder_.add_engine_speed(engine_speed);
  builder_.add_gear(gear);
  builder_.add_acceleration(acceleration);
  builder_.add_angular_velocity(angular_velocity);
  builder_.add_velocity(velocity);
  builder_.add_orientation(orientation);
  builder_.add_location(location);
  builder_.add_uuid(uuid);
  builder_.add_header(header);
  return builder_.Finish();
}

inline flatbuffers::Offset<PhysicsVehicleStateMeasurement> CreatePhysicsVehicleStateMeasurementDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<HeaderData> header = 0,
    const UUID *uuid = 0,
    const Vec3 *location = 0,
    const Quat4 *orientation = 0,
    const Vec3 *velocity = 0,
    const Vec3 *angular_velocity = 0,
    const Vec3 *acceleration = 0,
    int32_t gear = 0,
    float engine_speed = 0.0f,
    const std::vector<flatbuffers::Offset<PhysicsVehicleWheelsData>> *wheels = nullptr,
    const Vec3 *location_wgs84 = 0) {
  return RHMsg::CreatePhysicsVehicleStateMeasurement(
      _fbb,
      header,
      uuid,
      location,
      orientation,
      velocity,
      angular_velocity,
      acceleration,
      gear,
      engine_speed,
      wheels ? _fbb.CreateVector<flatbuffers::Offset<PhysicsVehicleWheelsData>>(*wheels) : 0,
      location_wgs84);
}

inline const RHMsg::PhysicsVehicleStateMeasurement *GetPhysicsVehicleStateMeasurement(const void *buf) {
  return flatbuffers::GetRoot<RHMsg::PhysicsVehicleStateMeasurement>(buf);
}

inline bool VerifyPhysicsVehicleStateMeasurementBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<RHMsg::PhysicsVehicleStateMeasurement>(nullptr);
}

inline void FinishPhysicsVehicleStateMeasurementBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<RHMsg::PhysicsVehicleStateMeasurement> root) {
  fbb.Finish(root);
}

}  // namespace RHMsg

#endif  // FLATBUFFERS_GENERATED_PHYSICSVEHICLESTATEMEASUREMENT_RHMSG_H_
