// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

#import "TutorialFactory.h"

NS_ASSUME_NONNULL_BEGIN


@class TutorialRequest, TutorialURLPRovider,TutorialMetaData, TutorialModelFactory;



typedef void (^TutorialLoaderCompletion)(TutorialMetaData * _Nullable,
                                         TutorialModel * _Nullable tutorialModel,
                                         NSError * _Nullable * error);

@protocol TutorialLoader <NSObject>

- (instancetype)initWithTutorialURLProvider:(TutorialURLPRovider *)urlProvider
                            tutorialModelCreator:(TutorialModelCreator)tutorialModelCreator
                    tutorialMetaDataCreator:(TutorialMetaDataCreator)tutorialMetaDataCreator;

- (void)loadTutorialWithTutorialRequest:(TutorialRequest *)request
                              completion:(TutorialLoaderCompletion)completion;

@end

NS_ASSUME_NONNULL_END
