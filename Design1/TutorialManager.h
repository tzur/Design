
#import <Foundation/Foundation.h>


#import "Clock.h"

NS_ASSUME_NONNULL_BEGIN

@class Cache, Clock, TutorialRequest, TutorialLoader, TutorialModelView, TutorialMetaDataCache,
    TutorialModelCache;

/// Block which is executed with the provided \c tutorialModelView. If an error has occured a non
/// \c nil \error will be provided with error description.
typedef void (^TutorialManagerCompletion)(TutorialModelView * _Nullable tutorialModelView,
                                          NSError * _Nullable error);

/// Object which manages the tutorials cache. It uses the \c TutorialLoader for reteiving the tutorials.
/// It stores tutorial's meta data using \c TutorialMetaDataCache. It stores tutorial using \
/// \c TutorialModelCache.
///

/// Object which manages the tutorials caches. initially it will check if there is available tutorial
/// stored in cache if there isn't, it will delegate a load request to \c TutorialLoader and update
/// cache appropriately.
@interface TutorialCacheManager : NSObject

- (instancetype)initWithTutorialLoader:(TutorialLoader *)tutorialLoader withClock:(Clock *)clock
                     withMetaDataCache:(TutorialMetaDataCache *)metaDataCache
                            modelCache:(TutorialModelCache *)modelCache;

- (void)loadTutorialWithTutorialRequest:(TutorialRequest *)tutorialRequest
                                   completion:(TutorialManagerCompletion)completion;

@end

NS_ASSUME_NONNULL_END
