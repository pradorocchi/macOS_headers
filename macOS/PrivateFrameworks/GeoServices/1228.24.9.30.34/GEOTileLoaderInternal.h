//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <GeoServices/GEOTileLoader.h>

#import <GeoServices/GEOExperimentConfigurationObserver-Protocol.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/GEOTileServerProxyDelegate-Protocol.h>

@class GEOTileLoaderConfiguration, GEOTileLoaderUsage, GEOTilePool, GEOTileServerProxy, NSMutableArray, NSMutableSet, NSObject, NSString;
@protocol GEOTileLoaderInternalDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOTileLoaderInternal : GEOTileLoader <GEOTileServerProxyDelegate, GEOResourceManifestTileGroupObserver, GEOExperimentConfigurationObserver>
{
    struct list<LoadItem, std::__1::allocator<LoadItem>> _loadItems;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    GEOTilePool *_cache;
    GEOTilePool *_expiringCache;
    struct unique_ptr<geo::DispatchTimer, std::__1::default_delete<geo::DispatchTimer>> _timer;
    NSObject<OS_dispatch_queue> *_loadQ;
    NSMutableSet *_openers;
    CDStruct_34734122 _sortPoint;
    GEOTileServerProxy *_proxy;
    // Error parsing type: Ai, name: _memoryHits
    // Error parsing type: Ai, name: _diskHits
    // Error parsing type: Ai, name: _networkHits
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)>>> _shrinkCacheRequesters;
    struct list<_CacheRequester<void (^)(unsigned long long)>, std::__1::allocator<_CacheRequester<void (^)(unsigned long long)>>> _freeableSizeRequesters;
    NSMutableArray *_tileDecoders;
    BOOL _networkActive;
    id <GEOTileLoaderInternalDelegate> _internalDelegate;
    NSObject<OS_dispatch_queue> *_internalDelegateQ;
    GEOTileLoaderConfiguration *_config;
    int _rollingBatchId;
    struct deque<ErrorInfo, std::__1::allocator<ErrorInfo>> _recentErrors;
    GEOTileLoaderUsage *_usage;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cachedTileForKey:(const struct _GEOTileKey *)arg1;
- (id)_findInCache:(const struct _GEOTileKey *)arg1;
- (id)internalDelegateQ;
- (void)setInternalDelegateQ:(id)arg1;
- (id)internalDelegate;
- (void)setInternalDelegate:(id)arg1;
- (id)proxy;
- (void)proxyDidDownloadRegionalResources:(id)arg1;
- (void)proxy:(id)arg1 willGoToNetworkForTiles:(id)arg2;
- (void)proxy:(id)arg1 didShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(id)arg1 canShrinkDiskCacheByAmount:(unsigned long long)arg2;
- (void)proxy:(id)arg1 failedToLoadAllPendingTilesWithError:(id)arg2;
- (void)proxy:(id)arg1 failedToLoadTiles:(id)arg2 error:(id)arg3;
- (void)proxy:(id)arg1 loadedTile:(id)arg2 forKey:(const struct _GEOTileKey *)arg3 info:(id)arg4;
- (void)_removeUsageDataForKey:(const struct _GEOTileKey *)arg1;
- (void)_loadedTile:(id)arg1 forKey:(const struct _GEOTileKey *)arg2 fromOfflinePack:(id)arg3;
- (void)_loadedTileForLocalKey:(struct _GEOTileKey)arg1 preliminary:(BOOL)arg2 quickly:(BOOL)arg3 tileDecoder:(id)arg4 data:(id)arg5 disburseTile:(CDUnknownBlockType)arg6;
- (void)_loadedTile:(id)arg1 forKey:(const struct _GEOTileKey *)arg2 info:(id)arg3;
- (void)reportCorruptTile:(const struct _GEOTileKey *)arg1;
- (void)expireTilesWithPredicate:(CDUnknownBlockType)arg1;
- (void)registerTileLoader:(Class)arg1;
- (void)registerTileDecoder:(id)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_tileEditionChanged:(id)arg1;
- (void)experimentConfigurationDidChange:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)_activeTileGroupChanged:(id)arg1;
- (void)clearAllCaches;
- (void)calculateFreeableSizeWithCallbackQ:(id)arg1 finished:(CDUnknownBlockType)arg2;
- (void)shrinkDiskCacheToSize:(unsigned long long)arg1 callbackQ:(id)arg2 finished:(CDUnknownBlockType)arg3;
- (void)endPreloadSessionForClient:(id)arg1;
- (void)beginPreloadSessionOfSize:(unsigned long long)arg1 forClient:(id)arg2 exclusive:(BOOL)arg3;
- (void)cancelAllForClient:(id)arg1;
- (void)cancelKey:(const struct _GEOTileKey *)arg1 forClient:(id)arg2;
- (void)setSortPoint:(const CDStruct_c3b9c2ee *)arg1;
- (void)_timerFired;
- (void)_requestOnlineTiles;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 options:(unsigned long long)arg4 callbackQ:(id)arg5 beginNetwork:(CDUnknownBlockType)arg6 callback:(CDUnknownBlockType)arg7;
- (BOOL)reprioritizeKey:(const struct _GEOTileKey *)arg1 forClient:(id)arg2 newPriority:(unsigned int)arg3;
- (void)loadKey:(const struct _GEOTileKey *)arg1 priority:(unsigned int)arg2 forClient:(id)arg3 proxyClient:(id)arg4 options:(unsigned long long)arg5 callbackQ:(id)arg6 beginNetwork:(CDUnknownBlockType)arg7 callback:(CDUnknownBlockType)arg8;
- (BOOL)_cancelIfNeeded:(__list_iterator_aef25af4 *)arg1;
- (void)_cancel:(__list_iterator_aef25af4 *)arg1 err:(id)arg2;
- (void)_updateNetworkActive;
- (void)closeForClient:(id)arg1;
- (void)openForClient:(id)arg1;
- (id)descriptionDictionaryRepresentation;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (int)networkHits;
- (int)diskHits;
- (int)memoryHits;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

