// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

#import "TutorialRequest.h"

NS_ASSUME_NONNULL_BEGIN

/// Object represents the meta data of a tutorial.
@interface TutorialImageMetaData : NSObject

/// Initializes with provided \c tutorialId - which is a unique for every tutorial, \c language
/// the tutorial language and \c viewSize the view size of the tutorial.
- (instancetype)initWithTutorialId:(NSString *)tutorialId tutorialLanguage:(NSString *)language
                      withViewSize:(CGSize)viewSize;

NS_ASSUME_NONNULL_END
