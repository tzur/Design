// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class TutorialRequest, TutorialURLPRovider, Tutorial, TutorialParser;

/// Completion block to fetch \c tutorial. On error \c tutorial will be \c nil and \c error will be
/// set.
typedef void (^TutorialCompletion)(Tutorial * _Nullable tutorial,
                                         NSError * _Nullable error);

/// Object that is responsible to load \c Tutorial.
@interface TutorialLoader : NSObject

/// Initializes with \c urlProvider object used to receive the appropriate url with the given \c
/// TutorialRequest, \c parser used to create \c Tutorial object.
- (instancetype)initWithTutorialURLProvider:(TutorialURLPRovider *)urlProvider
                             tutorialParser:(TutorialParser *)parser;

/// Loads an appropriate tutorial with the given \c request. The response will be at the \c
/// completion block.
- (void)loadTutorialWithTutorialRequest:(TutorialRequest *)request
                              completion:(TutorialCompletion)completion;

@end

NS_ASSUME_NONNULL_END
