// Reconstructed from DWARF by pahole; not original source.

// src/public/engine2/isource2clientconfig.h:27
class ISource2ClientConfig : public IAppSystem {
public:

	ISource2ClientConfig(ISource2ClientConfig &);
	ISource2ClientConfig(const ISource2ClientConfig &);
	ISource2ClientConfig();
	virtual int GetMaxSplitscreenPlayers();
	virtual void AllocateScratchRenderTargets(SwapChainHandle_t, const RenderDeviceInfo_t &, RenderMultisampleType_t);
	virtual CUtlStringToken GetDesiredRenderingPipeline();
	virtual bool InstantReplayShouldSkipMessage(int);
	virtual bool InstantReplayShouldIgnoreMessage(int);
	virtual bool ValidateNetworkVersion(int);
	virtual const char * ChangeWorldMountNameByNetworkVersion(const char *, int);

	// vtable[11] GetMaxSplitscreenPlayers
	// vtable[12] AllocateScratchRenderTargets
	// vtable[13] GetDesiredRenderingPipeline
	// vtable[14] InstantReplayShouldSkipMessage
	// vtable[15] InstantReplayShouldIgnoreMessage
	// vtable[16] ValidateNetworkVersion
	// vtable[17] ChangeWorldMountNameByNetworkVersion
	// sizeof = 8
};
