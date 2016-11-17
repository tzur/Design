// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class TutorialRequest, TutorialModel, TutorialMetaData;

typedef TutorialModel * _Nonnull (^TutorialModelCreator)(TutorialRequest *tutorialRequest,
                                                      NSData *tutorialData);

typedef TutorialMetaData * _Nonnull (^TutorialMetaDataCreator)(TutorialRequest *tutorialRequest,
                                                               NSData *tutorialMetaData);

@interface TutorialFactory : NSObject

+ (TutorialModelCreator)tutorialModelCreator;

+ (TutorialMetaDataCreator)tutorialMetaDataCreator;

@end

NS_ASSUME_NONNULL_END
