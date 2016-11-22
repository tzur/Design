// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class Clock, TutorialRequest, TutorialLoader, TutorialModel, TutorialMetaDataCache,
    TutorialModelCache;

/// Completion block to fetch \c tutorialModel. On error \c tutorialModel will be \c nil and error
/// will be set.
typedef void (^TutorialModelCompletion)(TutorialModel * _Nullable tutorialModel,
                                          NSError * _Nullable error);

/// Object which manages the tutorials logic. It is using two separate caches: \c
/// TutorialMetaDataCache which stores \c TutorialMetaData objects and \c TutorialModelCache
/// which stores \c TutorialModel objects. When there is no valid \c TutroialModel at the cache
/// the object will delegate a load request to \c TutorialLoader and load the caches in accordance.
///
/// @note It is possible that certain tutorial will be in \c TutorialMetaDataCache but not in
/// \c TutorialMetaData, but, the other way around is not.
@interface TutorialCacheManager : NSObject

/// Initializes with \c tutorialLoader the tutorial loader \c Clock class that returns the current
/// date, \c metaDataCache the tutorial meta data cache and \c modelCache the tutorial model cache.
- (instancetype)initWithTutorialLoader:(TutorialLoader *)tutorialLoader withClock:(Clock *)clock
                     withMetaDataCache:(TutorialMetaDataCache *)metaDataCache
                            modelCache:(TutorialModelCache *)modelCache;

/// Retrieve the appropriate tutorial to the \c tutorialRequest. The response will be at \c
/// completion block.
///
/// @note if there is no appropriate tutorial in the caches the object will delegate a load call to
/// \c tutorialLoader, the call may be asynchronous.
- (void)tutorialModelWithTutorialRequest:(TutorialRequest *)tutorialRequest
                                   completion:(TutorialModelCompletion)completion;

@end

NS_ASSUME_NONNULL_END
