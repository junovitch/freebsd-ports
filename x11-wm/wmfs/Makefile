# Created by: Dennis Herrmann <adox@mcx2.org>
# $FreeBSD$

PORTNAME=	wmfs
DISTVERSION=	201104
PORTREVISION=	4
CATEGORIES=	x11-wm
MASTER_SITES=	GHC

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Floating and tiling Window Manager From Scratch

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libfreetype.so:${PORTSDIR}/print/freetype2

USE_GITHUB=	yes
GH_ACCOUNT=	xorg62

USES=		pkgconfig
USE_XORG=	x11 xft xpm
HAS_CONFIGURE=	yes
CONFIGURE_ARGS=	--prefix ${PREFIX} \
		--man-prefix ${MANPREFIX}/man \
		--xdg-config-dir ${PREFIX}/etc/xdg

CFLAGS+=	-I${LOCALBASE}/include \
		-I${LOCALBASE}/include/freetype2

SUB_FILES=	pkg-message

OPTIONS_DEFINE=		XRANDR XINERAMA IMLIB
OPTIONS_DEFAULT=	XRANDR XINERAMA IMLIB

XRANDR_USE=		XORG=xrandr
XRANDR_CONFIGURE_WITH=	xrandr
XINERAMA_USE=		XORG=xinerama
XINERAMA_CONFIGURE_WITH=	xinerama
IMLIB_LIB_DEPENDS=	libImlib2.so:${PORTSDIR}/graphics/imlib2
IMLIB_CONFIGURE_WITH=	imlib2

post-install:
	${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
