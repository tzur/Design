// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

#import "TutorialRequest.h"

NS_ASSUME_NONNULL_BEGIN

/// Object represents the meta data of a tutorial.
@interface TutorialMetaData : NSObject

/// Initializes with provided \c tutorialId - which is a unique for every tutorial, \c category - 
/// which is a tutorial classification, \c tutorialSource - which describes the where from this
/// tutorial was obtained and \c expirationDate - which defines a period where this tutorial is 
/// valid.
- (instancetype)initWithTutorialId:(NSString *)tutorialId category:(TutorialCategory)category
                    tutorialSource:(TutorialSource)tutorialSource
                    expirationDate:(NSData *)expirationDate;

/// Unique id of a tutorial.
@property (readonly, nonatomic) NSString *tutorialId;

/// Classification of this tutorial.
@property (readonly, nonatomic) TutorialCategory *category;

/// Source where from this tutorial originates.
@property (readonly, nonatomic) TutorialSource *source;

/// Date which defines a period when this tutorial is still relevant (valid).
@property (readonly, nonatomic) NSData *expirationDate;

@end

NS_ASSUME_NONNULL_END
