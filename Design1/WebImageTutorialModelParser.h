// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol TutorialModelParser;

/// Object which handles the creation of image tutorial object located on web, from
/// \c TutorialModel.
@interface WebImageTutorialModelParser : NSObject <TutorialModelParser>
@end

NS_ASSUME_NONNULL_END
