//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSPredicateEditorRowTemplate.h>

@class NSPopUpButton, NSString;

@interface _AMBoolRowTemplate : NSPredicateEditorRowTemplate
{
    NSPopUpButton *_leftExpressionPopup;
    NSPopUpButton *_valuePopup;
    NSString *_name;
    NSString *_keyPath;
    NSString *_valueName;
    BOOL _value;
    BOOL _hasCreatedViews;
}

+ (id)templateWithName:(id)arg1 andKeyPath:(id)arg2 andValueName:(id)arg3 andValue:(BOOL)arg4;
- (id)predicateWithSubpredicates:(id)arg1;
- (void)setPredicate:(id)arg1;
- (double)matchForPredicate:(id)arg1;
- (id)templateViews;
- (void)createViewsIfNecessary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initTemplateWithName:(id)arg1 andKeyPath:(id)arg2 andValueName:(id)arg3 andValue:(BOOL)arg4;

@end

