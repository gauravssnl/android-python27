/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.11.2 on Thu Jul 12 20:03:20 2012
 *
 * Copyright (c) 2010 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt.
 * 
 * This file may be used under the terms of the GNU General Public
 * License versions 2.0 or 3.0 as published by the Free Software
 * Foundation and appearing in the files LICENSE.GPL2 and LICENSE.GPL3
 * included in the packaging of this file.  Alternatively you may (at
 * your option) use any later version of the GNU General Public
 * License if such license has been publicly approved by Riverbank
 * Computing Limited (or its successors, if any) and the KDE Free Qt
 * Foundation. In addition, as a special exception, Riverbank gives you
 * certain additional rights. These rights are described in the Riverbank
 * GPL Exception version 1.1, which can be found in the file
 * GPL_EXCEPTION.txt in this package.
 * 
 * Please review the following information to ensure GNU General
 * Public Licensing requirements will be met:
 * http://trolltech.com/products/qt/licenses/licensing/opensource/. If
 * you are unsure which license is appropriate for your use, please
 * review the following information:
 * http://trolltech.com/products/qt/licenses/licensing/licensingoverview
 * or contact the sales department at sales@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 39 "sipQtGuiQBrush.cpp"

#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 43 "sipQtGuiQBrush.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 46 "sipQtGuiQBrush.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 49 "sipQtGuiQBrush.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qimage.sip"
#include <qimage.h>
#line 52 "sipQtGuiQBrush.cpp"
#line 152 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qbrush.sip"
#include <qbrush.h>
#line 55 "sipQtGuiQBrush.cpp"
#line 41 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 58 "sipQtGuiQBrush.cpp"
#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qtransform.sip"
#include <qtransform.h>
#line 61 "sipQtGuiQBrush.cpp"
#line 40 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qmatrix.sip"
#include <qmatrix.h>
#line 64 "sipQtGuiQBrush.cpp"


extern "C" {static PyObject *meth_QBrush_setStyle(PyObject *, PyObject *);}
static PyObject *meth_QBrush_setStyle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::BrushStyle a0;
        QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QBrush, &sipCpp, sipType_Qt_BrushStyle, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setStyle(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_setStyle, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QBrush_texture(PyObject *, PyObject *);}
static PyObject *meth_QBrush_texture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBrush, &sipCpp))
        {
            QPixmap *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QPixmap(sipCpp->texture());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_texture, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QBrush_setTexture(PyObject *, PyObject *);}
static PyObject *meth_QBrush_setTexture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixmap * a0;
        QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QBrush, &sipCpp, sipType_QPixmap, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTexture(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_setTexture, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QBrush_setColor(PyObject *, PyObject *);}
static PyObject *meth_QBrush_setColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QColor * a0;
        int a0State = 0;
        QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QBrush, &sipCpp, sipType_QColor, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setColor(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QColor *>(a0),sipType_QColor,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        Qt::GlobalColor a0;
        QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QBrush, &sipCpp, sipType_Qt_GlobalColor, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setColor(a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_setColor, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QBrush_gradient(PyObject *, PyObject *);}
static PyObject *meth_QBrush_gradient(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBrush, &sipCpp))
        {
            const QGradient *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->gradient();
            Py_END_ALLOW_THREADS

            return sipConvertFromType(const_cast<QGradient *>(sipRes),sipType_QGradient,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_gradient, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QBrush_isOpaque(PyObject *, PyObject *);}
static PyObject *meth_QBrush_isOpaque(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBrush, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->isOpaque();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_isOpaque, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QBrush_style(PyObject *, PyObject *);}
static PyObject *meth_QBrush_style(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBrush, &sipCpp))
        {
            Qt::BrushStyle sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->style();
            Py_END_ALLOW_THREADS

            return sipConvertFromEnum(sipRes,sipType_Qt_BrushStyle);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_style, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QBrush_color(PyObject *, PyObject *);}
static PyObject *meth_QBrush_color(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBrush, &sipCpp))
        {
            QColor *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QColor(sipCpp->color());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_color, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QBrush_setMatrix(PyObject *, PyObject *);}
static PyObject *meth_QBrush_setMatrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMatrix * a0;
        QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QBrush, &sipCpp, sipType_QMatrix, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setMatrix(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_setMatrix, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QBrush_matrix(PyObject *, PyObject *);}
static PyObject *meth_QBrush_matrix(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBrush, &sipCpp))
        {
            QMatrix *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QMatrix(sipCpp->matrix());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QMatrix,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_matrix, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QBrush_setTextureImage(PyObject *, PyObject *);}
static PyObject *meth_QBrush_setTextureImage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QImage * a0;
        QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QBrush, &sipCpp, sipType_QImage, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTextureImage(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_setTextureImage, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QBrush_textureImage(PyObject *, PyObject *);}
static PyObject *meth_QBrush_textureImage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBrush, &sipCpp))
        {
            QImage *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QImage(sipCpp->textureImage());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QImage,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_textureImage, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QBrush_setTransform(PyObject *, PyObject *);}
static PyObject *meth_QBrush_setTransform(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTransform * a0;
        QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QBrush, &sipCpp, sipType_QTransform, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp->setTransform(*a0);
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_setTransform, NULL);

    return NULL;
}


extern "C" {static PyObject *meth_QBrush_transform(PyObject *, PyObject *);}
static PyObject *meth_QBrush_transform(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QBrush *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBrush, &sipCpp))
        {
            QTransform *sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new QTransform(sipCpp->transform());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QTransform,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBrush, sipName_transform, NULL);

    return NULL;
}


extern "C" {static PyObject *slot_QBrush___ne__(PyObject *,PyObject *);}
static PyObject *slot_QBrush___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QBrush *sipCpp = reinterpret_cast<QBrush *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBrush));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QBrush * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QBrush, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QBrush::operator!=(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QBrush *>(a0),sipType_QBrush,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QBrush,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QBrush___eq__(PyObject *,PyObject *);}
static PyObject *slot_QBrush___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QBrush *sipCpp = reinterpret_cast<QBrush *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBrush));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QBrush * a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QBrush, &a0, &a0State))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->QBrush::operator==(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QBrush *>(a0),sipType_QBrush,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QBrush,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QBrush(void *, const sipTypeDef *);}
static void *cast_QBrush(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QBrush)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QBrush(void *, int);}
static void release_QBrush(void *sipCppV,int)
{
    Py_BEGIN_ALLOW_THREADS

    delete reinterpret_cast<QBrush *>(sipCppV);

    Py_END_ALLOW_THREADS
}


extern "C" {static void assign_QBrush(void *, SIP_SSIZE_T, const void *);}
static void assign_QBrush(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QBrush *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QBrush *>(sipSrc);
}


extern "C" {static void *array_QBrush(SIP_SSIZE_T);}
static void *array_QBrush(SIP_SSIZE_T sipNrElem)
{
    return new QBrush[sipNrElem];
}


extern "C" {static void *copy_QBrush(const void *, SIP_SSIZE_T);}
static void *copy_QBrush(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QBrush(reinterpret_cast<const QBrush *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QBrush(sipSimpleWrapper *);}
static void dealloc_QBrush(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QBrush(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_QBrush(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_QBrush(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QBrush *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QBrush();
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        Qt::BrushStyle a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "E", sipType_Qt_BrushStyle, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QBrush(a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QColor * a0;
        int a0State = 0;
        Qt::BrushStyle a1 = Qt::SolidPattern;

        static const char *sipKwdList[] = {
            NULL,
            sipName_style,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|E", sipType_QColor, &a0, &a0State, sipType_Qt_BrushStyle, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QBrush(*a0,a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QColor *>(a0),sipType_QColor,a0State);

            return sipCpp;
        }
    }

    {
        Qt::GlobalColor a0;
        Qt::BrushStyle a1 = Qt::SolidPattern;

        static const char *sipKwdList[] = {
            NULL,
            sipName_style,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "E|E", sipType_Qt_GlobalColor, &a0, sipType_Qt_BrushStyle, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QBrush(a0,a1);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QColor * a0;
        int a0State = 0;
        const QPixmap * a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1J9", sipType_QColor, &a0, &a0State, sipType_QPixmap, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QBrush(*a0,*a1);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QColor *>(a0),sipType_QColor,a0State);

            return sipCpp;
        }
    }

    {
        Qt::GlobalColor a0;
        const QPixmap * a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "EJ9", sipType_Qt_GlobalColor, &a0, sipType_QPixmap, &a1))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QBrush(a0,*a1);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QPixmap * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPixmap, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QBrush(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QImage * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QImage, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QBrush(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QGradient * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGradient, &a0))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QBrush(*a0);
            Py_END_ALLOW_THREADS

            return sipCpp;
        }
    }

    {
        const QBrush * a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QBrush, &a0, &a0State))
        {
            Py_BEGIN_ALLOW_THREADS
            sipCpp = new QBrush(*a0);
            Py_END_ALLOW_THREADS
            sipReleaseType(const_cast<QBrush *>(a0),sipType_QBrush,a0State);

            return sipCpp;
        }
    }

    {
        const QVariant * a0;
        int a0State = 0;

        static const char *sipKwdList[] = {
            sipName_variant,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1", sipType_QVariant,&a0, &a0State))
        {
#line 110 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qbrush.sip"
        sipCpp = new QBrush(qVariantValue<QBrush>(*a0));
#line 753 "sipQtGuiQBrush.cpp"
            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QBrush(PyObject *, void **, int *, PyObject *);}
static int convertTo_QBrush(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QBrush **sipCppPtr = reinterpret_cast<QBrush **>(sipCppPtrV);

#line 44 "/home/tsheasha/GUC/Bachelors/android-python27/python-build/PyQt-x11-gpl-4.8/sip/QtGui/qbrush.sip"
// SIP doesn't support automatic type convertors so we explicitly allow a
// QColor or a QGradient to be used whenever a QBrush is expected.  Note that
// SIP must process QColor before QBrush so that the former's QVariant cast
// operator is applied before the latter's.

if (sipIsErr == NULL)
    return (sipCanConvertToType(sipPy, sipType_QBrush, SIP_NO_CONVERTORS) ||
            sipCanConvertToType(sipPy, sipType_QColor, 0) ||
            sipCanConvertToType(sipPy, sipType_QGradient, 0));

if (sipCanConvertToType(sipPy, sipType_QBrush, SIP_NO_CONVERTORS))
{
    *sipCppPtr = reinterpret_cast<QBrush *>(sipConvertToType(sipPy, sipType_QBrush, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

    return 0;
}

int state;

if (sipCanConvertToType(sipPy, sipType_QColor, 0))
{
    QColor *c = reinterpret_cast<QColor *>(sipConvertToType(sipPy, sipType_QColor, 0, 0, &state, sipIsErr));

    if (*sipIsErr)
    {
        sipReleaseType(c, sipType_QColor, state);
        return 0;
    }

    *sipCppPtr = new QBrush(*c);

    sipReleaseType(c, sipType_QColor, state);

    return sipGetState(sipTransferObj);
}

QGradient *g = reinterpret_cast<QGradient *>(sipConvertToType(sipPy, sipType_QGradient, 0, 0, &state, sipIsErr));

if (*sipIsErr)
{
    sipReleaseType(g, sipType_QGradient, state);
    return 0;
}

*sipCppPtr = new QBrush(*g);

sipReleaseType(g, sipType_QGradient, state);

return sipGetState(sipTransferObj);
#line 819 "sipQtGuiQBrush.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QBrush[] = {
    {(void *)slot_QBrush___ne__, ne_slot},
    {(void *)slot_QBrush___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QBrush[] = {
    {SIP_MLNAME_CAST(sipName_color), meth_QBrush_color, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_gradient), meth_QBrush_gradient, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_isOpaque), meth_QBrush_isOpaque, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_matrix), meth_QBrush_matrix, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setColor), meth_QBrush_setColor, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setMatrix), meth_QBrush_setMatrix, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setStyle), meth_QBrush_setStyle, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setTexture), meth_QBrush_setTexture, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setTextureImage), meth_QBrush_setTextureImage, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_setTransform), meth_QBrush_setTransform, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_style), meth_QBrush_style, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_texture), meth_QBrush_texture, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_textureImage), meth_QBrush_textureImage, METH_VARARGS, NULL},
    {SIP_MLNAME_CAST(sipName_transform), meth_QBrush_transform, METH_VARARGS, NULL}
};


pyqt4ClassTypeDef sipTypeDef_QtGui_QBrush = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_QBrush,
        {0}
    },
    {
        sipNameNr_QBrush,
        {0, 0, 1},
        14, methods_QBrush,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt4_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QBrush,
    init_QBrush,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QBrush,
    assign_QBrush,
    array_QBrush,
    copy_QBrush,
    release_QBrush,
    cast_QBrush,
    convertTo_QBrush,
    0,
    0
},
    0,
    0,
    0
};