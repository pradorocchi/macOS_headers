//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "EInterpolation.h"

@interface EPolynomialInterpolation : EInterpolation
{
    long long mOrder;
}

- (void)perform;
- (void)setOrder:(long long)arg1;
- (long long)order;
- (id)graphExpression;
- (id)equationString;
- (id)parameterNames;
- (long long)tag;
- (id)initWithInterpolator:(id)arg1;

@end

