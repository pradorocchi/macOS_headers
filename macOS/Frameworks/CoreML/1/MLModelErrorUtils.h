//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLModelErrorUtils : NSObject
{
}

+ (id)IOErrorWithString:(id)arg1;
+ (id)descriptionMismatchErrorWithString:(id)arg1;
+ (id)featureTypeErrorWithString:(id)arg1;
+ (id)genericErrorWithString:(id)arg1;
+ (id)errorWithCode:(long long)arg1 string:(id)arg2;
+ (id)errorWithCode:(long long)arg1 format:(id)arg2 args:(struct __va_list_tag [1])arg3;

@end

