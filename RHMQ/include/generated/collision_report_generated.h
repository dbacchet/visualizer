// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_COLLISIONREPORT_RHMSG_H_
#define FLATBUFFERS_GENERATED_COLLISIONREPORT_RHMSG_H_

#include "flatbuffers/flatbuffers.h"

#include "common_generated.h"
#include "header_generated.h"

namespace RHMsg {

struct CollisionReport;

struct CollisionReport FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  enum {
    VT_HEADER = 4,
    VT_ID = 6,
    VT_OTHER_NAME = 8,
    VT_OTHER_CLASS = 10
  };
  const HeaderData *header() const {
    return GetPointer<const HeaderData *>(VT_HEADER);
  }
  const UUID *id() const {
    return GetStruct<const UUID *>(VT_ID);
  }
  const flatbuffers::String *other_name() const {
    return GetPointer<const flatbuffers::String *>(VT_OTHER_NAME);
  }
  const flatbuffers::String *other_class() const {
    return GetPointer<const flatbuffers::String *>(VT_OTHER_CLASS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_HEADER) &&
           verifier.VerifyTable(header()) &&
           VerifyField<UUID>(verifier, VT_ID) &&
           VerifyOffset(verifier, VT_OTHER_NAME) &&
           verifier.Verify(other_name()) &&
           VerifyOffset(verifier, VT_OTHER_CLASS) &&
           verifier.Verify(other_class()) &&
           verifier.EndTable();
  }
};

struct CollisionReportBuilder {
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_header(flatbuffers::Offset<HeaderData> header) {
    fbb_.AddOffset(CollisionReport::VT_HEADER, header);
  }
  void add_id(const UUID *id) {
    fbb_.AddStruct(CollisionReport::VT_ID, id);
  }
  void add_other_name(flatbuffers::Offset<flatbuffers::String> other_name) {
    fbb_.AddOffset(CollisionReport::VT_OTHER_NAME, other_name);
  }
  void add_other_class(flatbuffers::Offset<flatbuffers::String> other_class) {
    fbb_.AddOffset(CollisionReport::VT_OTHER_CLASS, other_class);
  }
  CollisionReportBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  CollisionReportBuilder &operator=(const CollisionReportBuilder &);
  flatbuffers::Offset<CollisionReport> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<CollisionReport>(end);
    return o;
  }
};

inline flatbuffers::Offset<CollisionReport> CreateCollisionReport(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<HeaderData> header = 0,
    const UUID *id = 0,
    flatbuffers::Offset<flatbuffers::String> other_name = 0,
    flatbuffers::Offset<flatbuffers::String> other_class = 0) {
  CollisionReportBuilder builder_(_fbb);
  builder_.add_other_class(other_class);
  builder_.add_other_name(other_name);
  builder_.add_id(id);
  builder_.add_header(header);
  return builder_.Finish();
}

inline flatbuffers::Offset<CollisionReport> CreateCollisionReportDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<HeaderData> header = 0,
    const UUID *id = 0,
    const char *other_name = nullptr,
    const char *other_class = nullptr) {
  return RHMsg::CreateCollisionReport(
      _fbb,
      header,
      id,
      other_name ? _fbb.CreateString(other_name) : 0,
      other_class ? _fbb.CreateString(other_class) : 0);
}

inline const RHMsg::CollisionReport *GetCollisionReport(const void *buf) {
  return flatbuffers::GetRoot<RHMsg::CollisionReport>(buf);
}

inline bool VerifyCollisionReportBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<RHMsg::CollisionReport>(nullptr);
}

inline void FinishCollisionReportBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<RHMsg::CollisionReport> root) {
  fbb.Finish(root);
}

}  // namespace RHMsg

#endif  // FLATBUFFERS_GENERATED_COLLISIONREPORT_RHMSG_H_
