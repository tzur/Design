// Copyright (c) 2016 Lightricks. All rights reserved.
// Created by Zur Tene.

#import <Foundation/Foundation.h>

@protocol TutorialFilter;

NS_ASSUME_NONNULL_BEGIN

/// Object that filters tutorial metadata objects by there language.
@interface TutorialLanguageFilter : NSObject <TutorialFilter>

/// initializes with \c languages an array of all the languages that there tutorials wont be
/// removed.
- (instancetype)initWithLanguage:(NSArray<NSString *> *)languages

@end

NS_ASSUME_NONNULL_END
