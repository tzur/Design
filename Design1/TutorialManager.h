
#import <Foundation/Foundation.h>

#import "TutorialLoader.h"

#import "Clock.h"

NS_ASSUME_NONNULL_BEGIN

@class Cache, Clock;

@interface TutorialManager : NSObject

- (instancetype)initWithTutorialLoader:(id<TutorialLoader>)tutorialLoader withClock:(Clock *)clock
                              withCache:(Cache *)cache;

- (void)loadTutorialWithScreenTraitCollection:(UITraitCollection *)screenTraitCollection
                                   completion:(TutorialImageCompletion)completion;

@end

NS_ASSUME_NONNULL_END
