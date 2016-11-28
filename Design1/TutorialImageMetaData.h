// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

#import "TutorialRequest.h"

NS_ASSUME_NONNULL_BEGIN

/// Object represents the meta data of a tutorial.
@interface TutorialImageMetaData : NSObject

/// Initializes with provided \c tutorialId - which is a unique for every tutorial, \c category - 
/// which is a tutorial classification and \c expirationDate - which defines a period where this
///tutorial is valid.
- (instancetype)initWithTutorialId:(NSString *)tutorialId withViewSize:(CGSize)viewSize;

@end

NS_ASSUME_NONNULL_END
