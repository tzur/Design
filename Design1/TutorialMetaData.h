// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by zur tene.

#import <Foundation/Foundation.h>

#import "TutorialRequest.h"

NS_ASSUME_NONNULL_BEGIN

@interface TutorialMetaData : NSObject

- (instancetype)initWithTutorialId:(NSString *)tutorialId category:(TutorialCategory)category
                    tutorialSource:(TutorialSource)tutorialSource
                    expirationDate:(NSData *)expirationDate;

@property (readonly, nonatomic) NSString *tutorialId;

@property (readonly, nonatomic) TutorialCategory *category;

@property (readonly, nonatomic) TutorialSource *source;

@property (readonly, nonatomic) NSData *expirationDate;

@end

NS_ASSUME_NONNULL_END
