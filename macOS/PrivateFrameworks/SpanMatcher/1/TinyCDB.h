//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TinyCDB : NSObject
{
    int _mode;
    int _fileDesc;
    struct cdb _cdb;
    struct cdb_make _cdbmake;
    struct cdb_find _cdbfind;
    char *buf;
    int blen;
    NSString *_path;
}

@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (id)valuesFor:(id)arg1;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (int)getMode;
- (void)setMode:(int)arg1;
- (id)initAtPath:(id)arg1;
- (void)_allocbuf:(int)arg1;

@end

