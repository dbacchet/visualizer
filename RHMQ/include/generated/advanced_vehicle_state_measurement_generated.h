// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_ADVANCEDVEHICLESTATEMEASUREMENT_RHMSG_H_
#define FLATBUFFERS_GENERATED_ADVANCEDVEHICLESTATEMEASUREMENT_RHMSG_H_

#include "flatbuffers/flatbuffers.h"

#include "common_generated.h"
#include "header_generated.h"

namespace RHMsg {

struct AdvancedVehicleWheelsData;

struct AdvancedVehicleStateMeasurement;

struct AdvancedVehicleWheelsData FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_INDEX = 4,
    VT_CONTACT_MATERIAL_NAME = 6,
    VT_LOCATION = 8,
    VT_ORIENTATION = 10,
    VT_VELOCITY = 12,
    VT_ANGULAR_VELOCITY = 14
  };
  /// which wheel is this?
  WheelIndex index() const {
    return static_cast<WheelIndex>(GetField<int8_t>(VT_INDEX, 0));
  }
  /// the surface type that the tire surface is in contact with
  WheelContactMaterial contact_material_name() const {
    return static_cast<WheelContactMaterial>(GetField<int8_t>(VT_CONTACT_MATERIAL_NAME, 0));
  }
  /// location of the wheel reference point relative to vehicle body coordinate system origin (????? confirm with VI-Grade)
  const Vec3 *location() const {
    return GetStruct<const Vec3 *>(VT_LOCATION);
  }
  /// orientation of the wheel relative to vehicle body coordinate system axes (????? confirm with VI-Grade)
  const Quat4 *orientation() const {
    return GetStruct<const Quat4 *>(VT_ORIENTATION);
  }
  /// velocity of the wheel in wheel frame coordinate system (????? confirm with VI-Grade)
  const Vec3 *velocity() const {
    return GetStruct<const Vec3 *>(VT_VELOCITY);
  }
  /// angular velocity of the wheel in wheel frame coordinate system (????? confirm with VI-Grade)
  const Vec3 *angular_velocity() const {
    return GetStruct<const Vec3 *>(VT_ANGULAR_VELOCITY);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int8_t>(verifier, VT_INDEX) &&
           VerifyField<int8_t>(verifier, VT_CONTACT_MATERIAL_NAME) &&
           VerifyField<Vec3>(verifier, VT_LOCATION) &&
           VerifyField<Quat4>(verifier, VT_ORIENTATION) &&
           VerifyField<Vec3>(verifier, VT_VELOCITY) &&
           VerifyField<Vec3>(verifier, VT_ANGULAR_VELOCITY) &&
           verifier.EndTable();
  }
};

struct AdvancedVehicleWheelsDataBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_index(WheelIndex index) {
    fbb_.AddElement<int8_t>(AdvancedVehicleWheelsData::VT_INDEX, static_cast<int8_t>(index), 0);
  }
  void add_contact_material_name(WheelContactMaterial contact_material_name) {
    fbb_.AddElement<int8_t>(AdvancedVehicleWheelsData::VT_CONTACT_MATERIAL_NAME, static_cast<int8_t>(contact_material_name), 0);
  }
  void add_location(const Vec3 *location) {
    fbb_.AddStruct(AdvancedVehicleWheelsData::VT_LOCATION, location);
  }
  void add_orientation(const Quat4 *orientation) {
    fbb_.AddStruct(AdvancedVehicleWheelsData::VT_ORIENTATION, orientation);
  }
  void add_velocity(const Vec3 *velocity) {
    fbb_.AddStruct(AdvancedVehicleWheelsData::VT_VELOCITY, velocity);
  }
  void add_angular_velocity(const Vec3 *angular_velocity) {
    fbb_.AddStruct(AdvancedVehicleWheelsData::VT_ANGULAR_VELOCITY, angular_velocity);
  }
  AdvancedVehicleWheelsDataBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  AdvancedVehicleWheelsDataBuilder &operator=(const AdvancedVehicleWheelsDataBuilder &);
  flatbuffers::Offset<AdvancedVehicleWheelsData> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<AdvancedVehicleWheelsData>(end);
    return o;
  }
};

inline flatbuffers::Offset<AdvancedVehicleWheelsData> CreateAdvancedVehicleWheelsData(
    flatbuffers::FlatBufferBuilder &_fbb,
    WheelIndex index = WheelIndex_FRONTLEFT,
    WheelContactMaterial contact_material_name = WheelContactMaterial_UNKNOWN,
    const Vec3 *location = 0,
    const Quat4 *orientation = 0,
    const Vec3 *velocity = 0,
    const Vec3 *angular_velocity = 0) {
  AdvancedVehicleWheelsDataBuilder builder_(_fbb);
  builder_.add_angular_velocity(angular_velocity);
  builder_.add_velocity(velocity);
  builder_.add_orientation(orientation);
  builder_.add_location(location);
  builder_.add_contact_material_name(contact_material_name);
  builder_.add_index(index);
  return builder_.Finish();
}

struct AdvancedVehicleStateMeasurement FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_HEADER = 4,
    VT_UUID = 6,
    VT_LOCATION = 8,
    VT_ORIENTATION = 10,
    VT_VELOCITY = 12,
    VT_ANGULAR_VELOCITY = 14,
    VT_ACCELERATION = 16,
    VT_WHEELS = 18,
    VT_LIGHTS = 20,
    VT_HORN = 22,
    VT_PLATFORM_LOCATION = 24,
    VT_PLATFORM_ORIENTATION = 26,
    VT_DASHBOARD = 28,
    VT_LOCATION_WGS84 = 30
  };
  /// the standard data we pack in every message (simulation time, message type, etc.)
  const HeaderData *header() const {
    return GetPointer<const HeaderData *>(VT_HEADER);
  }
  /// a unique identifier for the vehicle
  const UUID *uuid() const {
    return GetStruct<const UUID *>(VT_UUID);
  }
  /// location of the vehicle body reference point relative to East-North-Up fixed coordinate system origin
  const Vec3 *location() const {
    return GetStruct<const Vec3 *>(VT_LOCATION);
  }
  /// orientation of the vehicle body relative to East-North-Up fixed coordinate system axes
  const Quat4 *orientation() const {
    return GetStruct<const Quat4 *>(VT_ORIENTATION);
  }
  /// velocity of the vehicle body reference point in body frame coordinate system (i.e. U, V, W)
  const Vec3 *velocity() const {
    return GetStruct<const Vec3 *>(VT_VELOCITY);
  }
  /// angular velocity of the vehicle body in body frame coordinate system (i.e. P, Q, R)
  const Vec3 *angular_velocity() const {
    return GetStruct<const Vec3 *>(VT_ANGULAR_VELOCITY);
  }
  /// acceleration of the vehicle body reference point in body frame coordinate system
  const Vec3 *acceleration() const {
    return GetStruct<const Vec3 *>(VT_ACCELERATION);
  }
  /// a vector of structures, each giving information on a wheel attached to the vehicle
  const flatbuffers::Vector<flatbuffers::Offset<AdvancedVehicleWheelsData>> *wheels() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<AdvancedVehicleWheelsData>> *>(VT_WHEELS);
  }
  /// lights structure
  const VehicleLights *lights() const {
    return GetStruct<const VehicleLights *>(VT_LIGHTS);
  }
  /// honk honk
  bool horn() const {
    return GetField<uint8_t>(VT_HORN, 0) != 0;
  }
  /// motion base offset used to calculate eyepoint compensation
  const Vec3 *platform_location() const {
    return GetStruct<const Vec3 *>(VT_PLATFORM_LOCATION);
  }
  /// motion base orientation used to calculate eyepoint compensation
  const Quat4 *platform_orientation() const {
    return GetStruct<const Quat4 *>(VT_PLATFORM_ORIENTATION);
  }
  /// data needed by an Unreal-drawn dashboard
  const VehicleDashboard *dashboard() const {
    return GetStruct<const VehicleDashboard *>(VT_DASHBOARD);
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
           VerifyOffset(verifier, VT_WHEELS) &&
           verifier.Verify(wheels()) &&
           verifier.VerifyVectorOfTables(wheels()) &&
           VerifyField<VehicleLights>(verifier, VT_LIGHTS) &&
           VerifyField<uint8_t>(verifier, VT_HORN) &&
           VerifyField<Vec3>(verifier, VT_PLATFORM_LOCATION) &&
           VerifyField<Quat4>(verifier, VT_PLATFORM_ORIENTATION) &&
           VerifyField<VehicleDashboard>(verifier, VT_DASHBOARD) &&
           VerifyField<Vec3>(verifier, VT_LOCATION_WGS84) &&
           verifier.EndTable();
  }
};

struct AdvancedVehicleStateMeasurementBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_header(flatbuffers::Offset<HeaderData> header) {
    fbb_.AddOffset(AdvancedVehicleStateMeasurement::VT_HEADER, header);
  }
  void add_uuid(const UUID *uuid) {
    fbb_.AddStruct(AdvancedVehicleStateMeasurement::VT_UUID, uuid);
  }
  void add_location(const Vec3 *location) {
    fbb_.AddStruct(AdvancedVehicleStateMeasurement::VT_LOCATION, location);
  }
  void add_orientation(const Quat4 *orientation) {
    fbb_.AddStruct(AdvancedVehicleStateMeasurement::VT_ORIENTATION, orientation);
  }
  void add_velocity(const Vec3 *velocity) {
    fbb_.AddStruct(AdvancedVehicleStateMeasurement::VT_VELOCITY, velocity);
  }
  void add_angular_velocity(const Vec3 *angular_velocity) {
    fbb_.AddStruct(AdvancedVehicleStateMeasurement::VT_ANGULAR_VELOCITY, angular_velocity);
  }
  void add_acceleration(const Vec3 *acceleration) {
    fbb_.AddStruct(AdvancedVehicleStateMeasurement::VT_ACCELERATION, acceleration);
  }
  void add_wheels(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<AdvancedVehicleWheelsData>>> wheels) {
    fbb_.AddOffset(AdvancedVehicleStateMeasurement::VT_WHEELS, wheels);
  }
  void add_lights(const VehicleLights *lights) {
    fbb_.AddStruct(AdvancedVehicleStateMeasurement::VT_LIGHTS, lights);
  }
  void add_horn(bool horn) {
    fbb_.AddElement<uint8_t>(AdvancedVehicleStateMeasurement::VT_HORN, static_cast<uint8_t>(horn), 0);
  }
  void add_platform_location(const Vec3 *platform_location) {
    fbb_.AddStruct(AdvancedVehicleStateMeasurement::VT_PLATFORM_LOCATION, platform_location);
  }
  void add_platform_orientation(const Quat4 *platform_orientation) {
    fbb_.AddStruct(AdvancedVehicleStateMeasurement::VT_PLATFORM_ORIENTATION, platform_orientation);
  }
  void add_dashboard(const VehicleDashboard *dashboard) {
    fbb_.AddStruct(AdvancedVehicleStateMeasurement::VT_DASHBOARD, dashboard);
  }
  void add_location_wgs84(const Vec3 *location_wgs84) {
    fbb_.AddStruct(AdvancedVehicleStateMeasurement::VT_LOCATION_WGS84, location_wgs84);
  }
  AdvancedVehicleStateMeasurementBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  AdvancedVehicleStateMeasurementBuilder &operator=(const AdvancedVehicleStateMeasurementBuilder &);
  flatbuffers::Offset<AdvancedVehicleStateMeasurement> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<AdvancedVehicleStateMeasurement>(end);
    return o;
  }
};

inline flatbuffers::Offset<AdvancedVehicleStateMeasurement> CreateAdvancedVehicleStateMeasurement(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<HeaderData> header = 0,
    const UUID *uuid = 0,
    const Vec3 *location = 0,
    const Quat4 *orientation = 0,
    const Vec3 *velocity = 0,
    const Vec3 *angular_velocity = 0,
    const Vec3 *acceleration = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<AdvancedVehicleWheelsData>>> wheels = 0,
    const VehicleLights *lights = 0,
    bool horn = false,
    const Vec3 *platform_location = 0,
    const Quat4 *platform_orientation = 0,
    const VehicleDashboard *dashboard = 0,
    const Vec3 *location_wgs84 = 0) {
  AdvancedVehicleStateMeasurementBuilder builder_(_fbb);
  builder_.add_location_wgs84(location_wgs84);
  builder_.add_dashboard(dashboard);
  builder_.add_platform_orientation(platform_orientation);
  builder_.add_platform_location(platform_location);
  builder_.add_lights(lights);
  builder_.add_wheels(wheels);
  builder_.add_acceleration(acceleration);
  builder_.add_angular_velocity(angular_velocity);
  builder_.add_velocity(velocity);
  builder_.add_orientation(orientation);
  builder_.add_location(location);
  builder_.add_uuid(uuid);
  builder_.add_header(header);
  builder_.add_horn(horn);
  return builder_.Finish();
}

inline flatbuffers::Offset<AdvancedVehicleStateMeasurement> CreateAdvancedVehicleStateMeasurementDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<HeaderData> header = 0,
    const UUID *uuid = 0,
    const Vec3 *location = 0,
    const Quat4 *orientation = 0,
    const Vec3 *velocity = 0,
    const Vec3 *angular_velocity = 0,
    const Vec3 *acceleration = 0,
    const std::vector<flatbuffers::Offset<AdvancedVehicleWheelsData>> *wheels = nullptr,
    const VehicleLights *lights = 0,
    bool horn = false,
    const Vec3 *platform_location = 0,
    const Quat4 *platform_orientation = 0,
    const VehicleDashboard *dashboard = 0,
    const Vec3 *location_wgs84 = 0) {
  return RHMsg::CreateAdvancedVehicleStateMeasurement(
      _fbb,
      header,
      uuid,
      location,
      orientation,
      velocity,
      angular_velocity,
      acceleration,
      wheels ? _fbb.CreateVector<flatbuffers::Offset<AdvancedVehicleWheelsData>>(*wheels) : 0,
      lights,
      horn,
      platform_location,
      platform_orientation,
      dashboard,
      location_wgs84);
}

inline const RHMsg::AdvancedVehicleStateMeasurement *GetAdvancedVehicleStateMeasurement(const void *buf) {
  return flatbuffers::GetRoot<RHMsg::AdvancedVehicleStateMeasurement>(buf);
}

inline bool VerifyAdvancedVehicleStateMeasurementBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<RHMsg::AdvancedVehicleStateMeasurement>(nullptr);
}

inline void FinishAdvancedVehicleStateMeasurementBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<RHMsg::AdvancedVehicleStateMeasurement> root) {
  fbb.Finish(root);
}

}  // namespace RHMsg

#endif  // FLATBUFFERS_GENERATED_ADVANCEDVEHICLESTATEMEASUREMENT_RHMSG_H_
