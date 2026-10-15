// Reconstructed from DWARF by pahole; not original source.

// src/public/resourcesystem/imanifestregistry.h:60
class CManifestRegistrar {
	CManifestRegistrar(ResourceManifestDesc_t *);
	void RegisterAll();
	void UnregisterManifest(ResourceManifestDesc_t *);
	void UnregisterManifests(ResourceManifestDesc_t * *, int);
	void UnregisterAll();

	// sizeof = 16
};
