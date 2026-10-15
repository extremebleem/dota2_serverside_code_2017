// Reconstructed from DWARF by pahole; not original source.

// src/public/gcsdk/gcmsglink.h:21
class CMsgIDLink<2u, 16u, 7026u, CMsgServerToGCRequestStatus> : public CMsgServerToGCRequestStatus {
public:

	static const uint32 knSenderContext;
	static const uint32 knReceiverContext;
	static const uint32 knSendID;
	static const bool kbHasResponse;
	CMsgIDLink(CMsgIDLink<2u, 16u, 7026u, CMsgServerToGCRequestStatus> &);
	CMsgIDLink(const CMsgIDLink<2u, 16u, 7026u, CMsgServerToGCRequestStatus> &);
	CMsgIDLink();
	virtual ~CMsgIDLink();

	// sizeof = 24
};

// src/public/gcsdk/gcmsglink.h:21
class CMsgIDLink<2u, 16u, 7310u, CMsgDOTAFantasyMatch> : public CMsgDOTAFantasyMatch {
public:

	static const uint32 knSenderContext;
	static const uint32 knReceiverContext;
	static const uint32 knSendID;
	static const bool kbHasResponse;
	CMsgIDLink(CMsgIDLink<2u, 16u, 7310u, CMsgDOTAFantasyMatch> &);
	CMsgIDLink(const CMsgIDLink<2u, 16u, 7310u, CMsgDOTAFantasyMatch> &);
	CMsgIDLink();
	virtual ~CMsgIDLink();

	// sizeof = 56
};

// src/public/gcsdk/gcmsglink.h:21
class CMsgIDLink<2u, 16u, 7308u, CMsgDOTAFantasyLivePlayerStats> : public CMsgDOTAFantasyLivePlayerStats {
public:

	static const uint32 knSenderContext;
	static const uint32 knReceiverContext;
	static const uint32 knSendID;
	static const bool kbHasResponse;
	CMsgIDLink(CMsgIDLink<2u, 16u, 7308u, CMsgDOTAFantasyLivePlayerStats> &);
	CMsgIDLink(const CMsgIDLink<2u, 16u, 7308u, CMsgDOTAFantasyLivePlayerStats> &);
	CMsgIDLink();
	virtual ~CMsgIDLink();

	// sizeof = 48
};

// src/public/gcsdk/gcmsglink.h:34
class CMsgIDLinkResponse<2u, 16u, 7026u, CMsgServerToGCRequestStatus, 7546u, CMsgServerToGCRequestStatus_Response> : public CMsgIDLink<2u, 16u, 7026u, CMsgServerToGCRequestStatus> {
public:

	static const uint32 knResponseID;
	static const bool kbHasResponse;
	CMsgIDLinkResponse(CMsgIDLinkResponse<2u, 16u, 7026u, CMsgServerToGCRequestStatus, 7546u, CMsgServerToGCRequestStatus_Response> &);
	CMsgIDLinkResponse(const CMsgIDLinkResponse<2u, 16u, 7026u, CMsgServerToGCRequestStatus, 7546u, CMsgServerToGCRequestStatus_Response> &);
	CMsgIDLinkResponse();
	virtual ~CMsgIDLinkResponse();

	// sizeof = 24
};

// src/public/gcsdk/gcmsglink.h:34
class CMsgIDLinkResponse<2u, 16u, 7310u, CMsgDOTAFantasyMatch, 2579u, CMsgGenericResult> : public CMsgIDLink<2u, 16u, 7310u, CMsgDOTAFantasyMatch> {
public:

	static const uint32 knResponseID;
	static const bool kbHasResponse;
	CMsgIDLinkResponse(CMsgIDLinkResponse<2u, 16u, 7310u, CMsgDOTAFantasyMatch, 2579u, CMsgGenericResult> &);
	CMsgIDLinkResponse(const CMsgIDLinkResponse<2u, 16u, 7310u, CMsgDOTAFantasyMatch, 2579u, CMsgGenericResult> &);
	CMsgIDLinkResponse();
	virtual ~CMsgIDLinkResponse();

	// sizeof = 56
};

// src/public/gcsdk/gcmsglink.h:34
class CMsgIDLinkResponse<2u, 16u, 7308u, CMsgDOTAFantasyLivePlayerStats, 2579u, CMsgGenericResult> : public CMsgIDLink<2u, 16u, 7308u, CMsgDOTAFantasyLivePlayerStats> {
public:

	static const uint32 knResponseID;
	static const bool kbHasResponse;
	CMsgIDLinkResponse(CMsgIDLinkResponse<2u, 16u, 7308u, CMsgDOTAFantasyLivePlayerStats, 2579u, CMsgGenericResult> &);
	CMsgIDLinkResponse(const CMsgIDLinkResponse<2u, 16u, 7308u, CMsgDOTAFantasyLivePlayerStats, 2579u, CMsgGenericResult> &);
	CMsgIDLinkResponse();
	virtual ~CMsgIDLinkResponse();

	// sizeof = 48
};

// src/public/gcsdk/gcmsglink.h:90
struct CMsgIDLinkGenericClientToGCResponse<2u, 7026u, CMsgServerToGCRequestStatus, 7546u, CMsgServerToGCRequestStatus_Response> : public CMsgIDLinkResponse<2u, 16u, 7026u, CMsgServerToGCRequestStatus, 7546u, CMsgServerToGCRequestStatus_Response> {
public:

	CMsgIDLinkGenericClientToGCResponse(CMsgIDLinkGenericClientToGCResponse<2u, 7026u, CMsgServerToGCRequestStatus, 7546u, CMsgServerToGCRequestStatus_Response> , CMsgIDLinkGenericClientToGCResponse<2u, 7026u, CMsgServerToGCRequestStatus, 7546u, CMsgServerToGCRequestStatus_Response> );
	CMsgIDLinkGenericClientToGCResponse(CMsgIDLinkGenericClientToGCResponse<2u, 7026u, CMsgServerToGCRequestStatus, 7546u, CMsgServerToGCRequestStatus_Response> , const CMsgIDLinkGenericClientToGCResponse<2u, 7026u, CMsgServerToGCRequestStatus, 7546u, CMsgServerToGCRequestStatus_Resp);
	CMsgIDLinkGenericClientToGCResponse(CMsgIDLinkGenericClientToGCResponse<2u, 7026u, CMsgServerToGCRequestStatus, 7546u, CMsgServerToGCRequestStatus_Response> );
	bool BYieldingCall(const CMsgIDLinkGenericClientToGCResponse<2u, 7026u, CMsgServerToGCRequestStatus, 7546u, CMsgServerToGCRequestStatus_Resp, CMsgServerToGCRequestStatus_Response *, EExpectedReply);
	bool BYieldingCall(const CMsgServerToGCRequestStatus &, CMsgServerToGCRequestStatus_Response *, EExpectedReply);
	ESendMessageAndGetReply YieldingCallEx(const CMsgIDLinkGenericClientToGCResponse<2u, 7026u, CMsgServerToGCRequestStatus, 7546u, CMsgServerToGCRequestStatus_Resp, CMsgServerToGCRequestStatus_Response *, EExpectedReply);
	ESendMessageAndGetReply YieldingCallEx(const CMsgServerToGCRequestStatus &, CMsgServerToGCRequestStatus_Response *, EExpectedReply);
	virtual ~CMsgIDLinkGenericClientToGCResponse(CMsgIDLinkGenericClientToGCResponse<2u, 7026u, CMsgServerToGCRequestStatus, 7546u, CMsgServerToGCRequestStatus_Response> , int);

	// sizeof = 24
};

// src/public/gcsdk/gcmsglink.h:90
struct CMsgIDLinkGenericClientToGCResponse<2u, 7310u, CMsgDOTAFantasyMatch, 2579u, CMsgGenericResult> : public CMsgIDLinkResponse<2u, 16u, 7310u, CMsgDOTAFantasyMatch, 2579u, CMsgGenericResult> {
public:

	CMsgIDLinkGenericClientToGCResponse(CMsgIDLinkGenericClientToGCResponse<2u, 7310u, CMsgDOTAFantasyMatch, 2579u, CMsgGenericResult> &);
	CMsgIDLinkGenericClientToGCResponse(const CMsgIDLinkGenericClientToGCResponse<2u, 7310u, CMsgDOTAFantasyMatch, 2579u, CMsgGenericResult> &);
	CMsgIDLinkGenericClientToGCResponse();
	bool BYieldingCall(CMsgGenericResult *, EExpectedReply);
	bool BYieldingCall(const CMsgDOTAFantasyMatch &, CMsgGenericResult *, EExpectedReply);
	ESendMessageAndGetReply YieldingCallEx(CMsgGenericResult *, EExpectedReply);
	ESendMessageAndGetReply YieldingCallEx(const CMsgDOTAFantasyMatch &, CMsgGenericResult *, EExpectedReply);
	virtual ~CMsgIDLinkGenericClientToGCResponse();

	// sizeof = 56
};

// src/public/gcsdk/gcmsglink.h:90
struct CMsgIDLinkGenericClientToGCResponse<2u, 7308u, CMsgDOTAFantasyLivePlayerStats, 2579u, CMsgGenericResult> : public CMsgIDLinkResponse<2u, 16u, 7308u, CMsgDOTAFantasyLivePlayerStats, 2579u, CMsgGenericResult> {
public:

	CMsgIDLinkGenericClientToGCResponse(CMsgIDLinkGenericClientToGCResponse<2u, 7308u, CMsgDOTAFantasyLivePlayerStats, 2579u, CMsgGenericResult> &);
	CMsgIDLinkGenericClientToGCResponse(const CMsgIDLinkGenericClientToGCResponse<2u, 7308u, CMsgDOTAFantasyLivePlayerStats, 2579u, CMsgGenericResult> &);
	CMsgIDLinkGenericClientToGCResponse();
	bool BYieldingCall(CMsgGenericResult *, EExpectedReply);
	bool BYieldingCall(const CMsgDOTAFantasyLivePlayerStats &, CMsgGenericResult *, EExpectedReply);
	ESendMessageAndGetReply YieldingCallEx(CMsgGenericResult *, EExpectedReply);
	ESendMessageAndGetReply YieldingCallEx(const CMsgDOTAFantasyLivePlayerStats &, CMsgGenericResult *, EExpectedReply);
	virtual ~CMsgIDLinkGenericClientToGCResponse();

	// sizeof = 48
};

// CMsgIDLink: 2 more instantiations (full list in INDEX.tsv)
//   CMsgIDLink<2u, 16u, 7160u, CMsgGameServerGetLoadGame>
//   CMsgIDLink<2u, 16u, 7158u, CMsgGameServerUploadSaveGame>

// CMsgIDLinkResponse: 2 more instantiations (full list in INDEX.tsv)
//   CMsgIDLinkResponse<2u, 16u, 7160u, CMsgGameServerGetLoadGame, 7161u, CMsgGameServerGetLoadGameResult>
//   CMsgIDLinkResponse<2u, 16u, 7158u, CMsgGameServerUploadSaveGame, 7159u, CMsgGameServerSaveGameResult>

// CMsgIDLinkGenericClientToGCResponse: 2 more instantiations (full list in INDEX.tsv)
//   CMsgIDLinkGenericClientToGCResponse<2u, 7160u, CMsgGameServerGetLoadGame, 7161u, CMsgGameServerGetLoadGameResult>
//   CMsgIDLinkGenericClientToGCResponse<2u, 7158u, CMsgGameServerUploadSaveGame, 7159u, CMsgGameServerSaveGameResult>
