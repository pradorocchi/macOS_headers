//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface TNFormulaIDWrapper : NSObject <NSCopying>
{
    CDStruct_a91f2c80 mID;
}

@property(readonly) CDStruct_a91f2c80 formulaID; // @synthesize formulaID=mID;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToTNFormulaIDWrapper:(id)arg1;
- (CDStruct_a91f2c80)chartFormulaID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTNChartFormulaID:(CDStruct_a91f2c80)arg1;

@end

