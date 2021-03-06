//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct AVAsset {
    Class _field1;
    id _field2;
};

struct Attachment {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field5;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field6;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field7;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field8;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field9;
};

struct CATransform3D {
    double m11;
    double m12;
    double m13;
    double m14;
    double m21;
    double m22;
    double m23;
    double m24;
    double m31;
    double m32;
    double m33;
    double m34;
    double m41;
    double m42;
    double m43;
    double m44;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct CVSMPTETime {
    short _field1;
    short _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    short _field6;
    short _field7;
    short _field8;
    short _field9;
};

struct Contour {
    vector_d46ea067 _field1;
    _Bool _field2;
    _Bool _field3;
};

struct Document {
    CDUnknownFunctionPointerType *_vptr$MessageLite;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _unknown_fields_;
    unsigned int _has_bits_[1];
    int _cached_size_;
    struct NoteDocument *notedocument_;
    struct LegacyNoteDocument *legacynotedocument_;
};

struct ICDeviceHardwareInfo {
    unsigned long long modelName;
    long long version;
    long long subVersion;
};

struct ICMacBaseTextView {
    Class _field1;
    id _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    struct __VFlags _field13;
    struct __VFlags2 _field14;
    id _field15;
};

struct Identity;

struct Invite;

struct InviteReply;

struct KeepAlive {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
};

struct LegacyNoteDocument;

struct Media {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field5;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field6;
};

struct NFAccount {
    Class _field1;
};

struct NSColor {
    Class _field1;
};

struct NSEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct NSImage {
    Class _field1;
    id _field2;
    struct CGSize _field3;
    struct __imageFlags {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :2;
        unsigned int :3;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :8;
    } _field4;
    id _field5;
    id _field6;
};

struct NSImageView {
    Class _field1;
    id _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    struct __VFlags _field13;
    struct __VFlags2 _field14;
    id _field15;
    id _field16;
    struct __conFlags {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :22;
    } _field17;
    struct __IVFlags {
        unsigned int :1;
        unsigned int :1;
        unsigned int :24;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
    } _field18;
    id _field19;
    SEL _field20;
};

struct NSManagedObjectContext {
    Class _field1;
};

struct NSResponder {
    Class _field1;
    id _field2;
};

struct NSScrollView {
    Class _field1;
    id _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    struct __VFlags _field13;
    struct __VFlags2 _field14;
    id _field15;
    id _field16;
    id _field17;
    id _field18;
    id _field19;
    id _field20;
    struct __SFlags {
        unsigned int :3;
        unsigned int :1;
        unsigned int :1;
        unsigned int :2;
        unsigned int :1;
        unsigned int :2;
        unsigned int :2;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :2;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
    } _field21;
    id _field22;
    id _field23;
    id _field24;
};

struct NSTextView {
    Class _field1;
    id _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    struct __VFlags _field13;
    struct __VFlags2 _field14;
    id _field15;
};

struct NSView {
    Class _field1;
    id _field2;
    struct CGRect _field3;
    struct CGRect _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    struct __VFlags _field13;
    struct __VFlags2 _field14;
};

struct NSViewController {
    Class _field1;
    id _field2;
    id _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    id _field11;
    id _field12;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :28;
    unsigned int :0;
};

struct NSWindow {
    Class _field1;
    id _field2;
    struct CGRect _field3;
    id _field4;
    id _field5;
    id _field6;
    id _field7;
    id _field8;
    id _field9;
    id _field10;
    int _field11;
    long long _field12;
    int _field13;
    id _field14;
    id _field15;
    unsigned char _field16;
    unsigned char _field17;
    unsigned char _field18;
    unsigned int :1;
    unsigned int :7;
    void *_field19;
    void *_field20;
    id _field21;
    int _field22;
    id _field23;
    id _field24;
    struct CGSize *_field25;
    id _field26;
    id _field27;
    struct __wFlags {
        unsigned int :2;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :4;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :2;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
    } _field28;
    id _field29;
    id _field30;
    id _field31;
};

struct Note {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field5;
    struct Document *_field6;
};

struct NoteDocument;

struct PeerNetworkMessage {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    struct Note *_field5;
    struct RequestNote *_field6;
    struct Attachment *_field7;
    struct RequestAttachment *_field8;
    struct RequestMedia *_field9;
    struct UnavailableMedia *_field10;
    struct Identity *_field11;
    struct Invite *_field12;
    struct InviteReply *_field13;
    struct ShareInfo *_field14;
    struct Media *_field15;
    struct KeepAlive *_field16;
    unsigned int _field17;
};

struct RequestAttachment {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field5;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field6;
};

struct RequestMedia {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field5;
};

struct RequestNote {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field5;
};

struct ShareInfo;

struct StrokeVertex {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
};

struct UnavailableMedia {
    CDUnknownFunctionPointerType *_field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    unsigned int _field3[1];
    int _field4;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> *_field5;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __VFlags {
    unsigned int :1;
    unsigned int :1;
    unsigned int :5;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :2;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :6;
    unsigned int :1;
    unsigned int :1;
};

struct __VFlags2 {
    unsigned int :14;
    unsigned int :14;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long __cap_;
                    unsigned long long __size_;
                    char *__data_;
                } __l;
                struct __short {
                    union {
                        unsigned char __size_;
                        char __lx;
                    } ;
                    char __data_[23];
                } __s;
                struct __raw {
                    unsigned long long __words[3];
                } __r;
            } ;
        } __first_;
    } __r_;
};

struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint>> {
    CDStruct_183601bc *_field1;
    CDStruct_183601bc *_field2;
    struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint>> {
        CDStruct_183601bc *_field1;
    } _field3;
};

struct vector<_CGLPixelFormatAttribute, std::__1::allocator<_CGLPixelFormatAttribute>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<_CGLPixelFormatAttribute *, std::__1::allocator<_CGLPixelFormatAttribute>> {
        int *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    float x;
    float y;
    float z;
    float w;
} CDStruct_f2e236b6;

typedef struct {
    float x;
    float y;
    float z;
} CDStruct_03942939;

typedef struct {
    float x;
    float y;
} CDStruct_6e3f967a;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct {
    long long _field1;
    long long _field2;
    long long _field3;
} CDStruct_2ec95fd7;

typedef struct CDStruct_183601bc;

typedef struct {
    unsigned int _field1;
    int _field2;
    long long _field3;
    unsigned long long _field4;
    double _field5;
    long long _field6;
    struct CVSMPTETime _field7;
    unsigned long long _field8;
    unsigned long long _field9;
} CDStruct_e50ab651;

typedef struct {
    int _field1;
    unsigned long long _field2;
    char _field3;
    char *_field4;
    unsigned long long _field5;
    unsigned long long _field6;
    unsigned long long _field7;
    char _field8;
    struct _NSRange _field9;
    unsigned long long _field10;
} CDStruct_1ccefb9d;

typedef struct {
    struct CGPoint point;
    double radius;
    double opacity;
    double azimuth;
    double edgeWidth;
    double aspectRatio;
    double timestamp;
} CDStruct_4a3d0796;

// Template types
typedef struct vector<ICDrawingOutputPoint, std::__1::allocator<ICDrawingOutputPoint>> {
    CDStruct_183601bc *_field1;
    CDStruct_183601bc *_field2;
    struct __compressed_pair<ICDrawingOutputPoint *, std::__1::allocator<ICDrawingOutputPoint>> {
        CDStruct_183601bc *_field1;
    } _field3;
} vector_d46ea067;

typedef struct vector<_CGLPixelFormatAttribute, std::__1::allocator<_CGLPixelFormatAttribute>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<_CGLPixelFormatAttribute *, std::__1::allocator<_CGLPixelFormatAttribute>> {
        int *_field1;
    } _field3;
} vector_10364fa1;

