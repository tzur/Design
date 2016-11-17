// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

#import "TutorialFactory.h"

NS_ASSUME_NONNULL_BEGIN

@class TutorialRequest, TutorialURLPRovider, Tutorial, TutorialModelFactory;

/// Completion block to fetch \c tutorial. On error \c tutorial will be \c nil and \c error will be
/// set.
typedef void (^TutorialCompletion)(Tutorial * _Nullable tutorial,
                                         NSError * _Nullable error);

/// Object that is responsible to fetch \c Tutorial from a given url.
@interface TutorialLoader : NSObject

/// Initializes with \c urlProvider object used to receive the appropriate url with a given \c
/// TutorialRequest, \c tutorialModelCreator used to parse \c TutorialModel and \c
/// tutorialMetaDataCreator used to parse \c TutorialModelData.
- (instancetype)initWithTutorialURLProvider:(TutorialURLPRovider *)urlProvider
                            tutorialModelCreator:(TutorialModelCreator)tutorialModelCreator
                    tutorialMetaDataCreator:(TutorialMetaDataCreator)tutorialMetaDataCreator;

/// Loads an appropriate tutorial with the given \c request. The response will be at the \c
/// completion block.
- (void)loadTutorialWithTutorialRequest:(TutorialRequest *)request
                              completion:(TutorialCompletion)completion;

@end

NS_ASSUME_NONNULL_END
